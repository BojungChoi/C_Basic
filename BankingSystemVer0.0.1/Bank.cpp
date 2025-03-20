#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Account {
private:
    int accountNum;        // 계좌번호
    string customerName;   // 고객 이름
    int balance;           // 잔액

public:
    // 생성자
    Account(int accNum, string name, int money)
        : accountNum(accNum), customerName(name), balance(money) {
        cout << "계좌 생성 완료! [" << customerName << "]님, 초기 잔액: " << balance << "원" << endl;
    }

    // 입금 기능
    void Deposit(int money) {
        if (money <= 0) {
            cout << "잘못된 입금 금액입니다!" << endl;
            return;
        }
        balance += money;
        cout << money << "원이 입금되었습니다. 현재 잔액: " << balance << "원" << endl;
    }

    // 출금 기능
    void Withdraw(int money) {
        if (money > balance) {
            cout << "잔액이 부족합니다!" << endl;
            return;
        }
        balance -= money;
        cout << money << "원이 출금되었습니다. 현재 잔액: " << balance << "원" << endl;
    }

    // 잔액 확인
    void ShowBalance() const {
        cout << "[" << customerName << "]님의 현재 잔액은 " << balance << "원입니다." << endl;
    }

    // 고객 정보 출력
    void ShowInfo() const {
        cout << "=== 고객 정보 ===" << endl;
        cout << "계좌번호: " << accountNum << endl;
        cout << "이름: " << customerName << endl;
        cout << "잔액: " << balance << "원" << endl;
        cout << "================" << endl;
    }

    // 계좌번호 가져오기 (검색용)
    int GetAccountNum() const {
        return accountNum;
    }
};

// 전역으로 계좌 관리
vector<Account> accounts;

// 계좌 찾기 함수
Account* FindAccount(int accNum) {
    for (auto& acc : accounts) {
        if (acc.GetAccountNum() == accNum)
            return &acc;
    }
    return nullptr;
}

int main() {
    int choice;

    while (true) {
        cout << "\n===== 은행 시스템 메뉴 =====" << endl;
        cout << "1. 계좌 생성" << endl;
        cout << "2. 입금" << endl;
        cout << "3. 출금" << endl;
        cout << "4. 잔액 확인" << endl;
        cout << "5. 고객 정보 출력" << endl;
        cout << "6. 종료" << endl;
        cout << "선택: ";
        cin >> choice;

        if (choice == 1) {
            int accNum;
            string name;
            int money;

            cout << "계좌번호 입력: ";
            cin >> accNum;
            cout << "이름 입력: ";
            cin >> name;
            cout << "초기 입금액 입력: ";
            cin >> money;

            accounts.push_back(Account(accNum, name, money));

        }
        else if (choice == 2) {
            int accNum, money;
            cout << "계좌번호 입력: ";
            cin >> accNum;
            Account* acc = FindAccount(accNum);

            if (acc != nullptr) {
                cout << "입금할 금액 입력: ";
                cin >> money;
                acc->Deposit(money);
            }
            else {
                cout << "해당 계좌가 없습니다!" << endl;
            }

        }
        else if (choice == 3) {
            int accNum, money;
            cout << "계좌번호 입력: ";
            cin >> accNum;
            Account* acc = FindAccount(accNum);

            if (acc != nullptr) {
                cout << "출금할 금액 입력: ";
                cin >> money;
                acc->Withdraw(money);
            }
            else {
                cout << "해당 계좌가 없습니다!" << endl;
            }

        }
        else if (choice == 4) {
            int accNum;
            cout << "계좌번호 입력: ";
            cin >> accNum;
            Account* acc = FindAccount(accNum);

            if (acc != nullptr) {
                acc->ShowBalance();
            }
            else {
                cout << "해당 계좌가 없습니다!" << endl;
            }

        }
        else if (choice == 5) {
            int accNum;
            cout << "계좌번호 입력: ";
            cin >> accNum;
            Account* acc = FindAccount(accNum);

            if (acc != nullptr) {
                acc->ShowInfo();
            }
            else {
                cout << "해당 계좌가 없습니다!" << endl;
            }

        }
        else if (choice == 6) {
            cout << "프로그램 종료!" << endl;
            break;
        }
        else {
            cout << "잘못된 선택입니다!" << endl;
        }
    }

    return 0;
}
