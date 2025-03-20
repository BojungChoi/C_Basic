#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Account {
private:
    int accountNum;        // ���¹�ȣ
    string customerName;   // �� �̸�
    int balance;           // �ܾ�

public:
    // ������
    Account(int accNum, string name, int money)
        : accountNum(accNum), customerName(name), balance(money) {
        cout << "���� ���� �Ϸ�! [" << customerName << "]��, �ʱ� �ܾ�: " << balance << "��" << endl;
    }

    // �Ա� ���
    void Deposit(int money) {
        if (money <= 0) {
            cout << "�߸��� �Ա� �ݾ��Դϴ�!" << endl;
            return;
        }
        balance += money;
        cout << money << "���� �ԱݵǾ����ϴ�. ���� �ܾ�: " << balance << "��" << endl;
    }

    // ��� ���
    void Withdraw(int money) {
        if (money > balance) {
            cout << "�ܾ��� �����մϴ�!" << endl;
            return;
        }
        balance -= money;
        cout << money << "���� ��ݵǾ����ϴ�. ���� �ܾ�: " << balance << "��" << endl;
    }

    // �ܾ� Ȯ��
    void ShowBalance() const {
        cout << "[" << customerName << "]���� ���� �ܾ��� " << balance << "���Դϴ�." << endl;
    }

    // �� ���� ���
    void ShowInfo() const {
        cout << "=== �� ���� ===" << endl;
        cout << "���¹�ȣ: " << accountNum << endl;
        cout << "�̸�: " << customerName << endl;
        cout << "�ܾ�: " << balance << "��" << endl;
        cout << "================" << endl;
    }

    // ���¹�ȣ �������� (�˻���)
    int GetAccountNum() const {
        return accountNum;
    }
};

// �������� ���� ����
vector<Account> accounts;

// ���� ã�� �Լ�
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
        cout << "\n===== ���� �ý��� �޴� =====" << endl;
        cout << "1. ���� ����" << endl;
        cout << "2. �Ա�" << endl;
        cout << "3. ���" << endl;
        cout << "4. �ܾ� Ȯ��" << endl;
        cout << "5. �� ���� ���" << endl;
        cout << "6. ����" << endl;
        cout << "����: ";
        cin >> choice;

        if (choice == 1) {
            int accNum;
            string name;
            int money;

            cout << "���¹�ȣ �Է�: ";
            cin >> accNum;
            cout << "�̸� �Է�: ";
            cin >> name;
            cout << "�ʱ� �Աݾ� �Է�: ";
            cin >> money;

            accounts.push_back(Account(accNum, name, money));

        }
        else if (choice == 2) {
            int accNum, money;
            cout << "���¹�ȣ �Է�: ";
            cin >> accNum;
            Account* acc = FindAccount(accNum);

            if (acc != nullptr) {
                cout << "�Ա��� �ݾ� �Է�: ";
                cin >> money;
                acc->Deposit(money);
            }
            else {
                cout << "�ش� ���°� �����ϴ�!" << endl;
            }

        }
        else if (choice == 3) {
            int accNum, money;
            cout << "���¹�ȣ �Է�: ";
            cin >> accNum;
            Account* acc = FindAccount(accNum);

            if (acc != nullptr) {
                cout << "����� �ݾ� �Է�: ";
                cin >> money;
                acc->Withdraw(money);
            }
            else {
                cout << "�ش� ���°� �����ϴ�!" << endl;
            }

        }
        else if (choice == 4) {
            int accNum;
            cout << "���¹�ȣ �Է�: ";
            cin >> accNum;
            Account* acc = FindAccount(accNum);

            if (acc != nullptr) {
                acc->ShowBalance();
            }
            else {
                cout << "�ش� ���°� �����ϴ�!" << endl;
            }

        }
        else if (choice == 5) {
            int accNum;
            cout << "���¹�ȣ �Է�: ";
            cin >> accNum;
            Account* acc = FindAccount(accNum);

            if (acc != nullptr) {
                acc->ShowInfo();
            }
            else {
                cout << "�ش� ���°� �����ϴ�!" << endl;
            }

        }
        else if (choice == 6) {
            cout << "���α׷� ����!" << endl;
            break;
        }
        else {
            cout << "�߸��� �����Դϴ�!" << endl;
        }
    }

    return 0;
}
