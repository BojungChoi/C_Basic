# C_Basic
C 언어 기본 학습 리포지토리

---

# Day 01 - C 언어 기초
날짜: 2025-03-11  
깃허브 링크: [day01 폴더 바로가기](https://github.com/BojungChoi/C_Basic/tree/main/day01)

---

### 학습 주제
- C 언어의 특징
- 자료형과 변수
- 함수 개념 및 선언/정의/호출
- 형식 지정자
- 메모리 구조 (ROM, RAM, 레지스터)

---

### C 언어의 특징
- 절차지향 프로그래밍 언어
- 빠르고 효율적인 저수준(low-level) 언어
  - 메모리 주소를 직접 지정할 수 있음 (포인터 활용)
  - 하드웨어 친화적
- 포인터 기능 제공
  - 배열과 문자열 처리에 용이
  - 효율적인 데이터 구조를 구현 가능 (연결 리스트, 트리 등)

---

### 자료형

#### 기본형
| 자료형 | 크기 | 설명 |
|--------|------|------|
| `char` | 1바이트 (8비트) | 문자 |
| `int` | 4바이트 (32비트) | 정수 |
| `short` | 2바이트 (16비트) | 작은 정수 |
| `long` | 4바이트 (32비트) | 큰 정수 |
| `long long` | 8바이트 (64비트) | 더 큰 정수 |
| `float` | 4바이트 | 실수 (소수점) |
| `double` | 8바이트 | 정밀한 실수 |

#### 파생형
- 배열, 포인터, 구조체, 공용체, 열거형 등이 있음

---

### 함수
- 함수 선언: 함수 원형을 미리 선언해서 호출 순서와 무관하게 사용 가능
- 함수 정의: 함수의 실제 구현부
- 함수 호출: 정의된 함수 실행

#### 예시
```c
void function(); // 선언

void function() { // 정의
  printf("Hello\n");
}

int main() {
  function(); // 호출
  return 0;
}
```

---

### 형식 지정자

| 형식 지정자 | 설명 |
|-------------|------|
| `%d` / `%i` | 10진수 정수 출력 |
| `%x` / `%X` | 16진수 정수 출력 |
| `%o` | 8진수 정수 출력 |
| `%c` | 문자 출력 |
| `%s` | 문자열 출력 |
| `%f` | 실수 출력 (소수점 이하 6자리) |
| `%e` / `%E` | 지수 표기법 출력 |
| `%g` / `%G` | 자동 변환 (`%f` 또는 `%e`) |
| `%p` | 포인터 주소 출력 |

---

### 메모리 구조

| 메모리 | 설명 |
|--------|------|
| ROM | 읽기 전용 메모리. 프로그램이 저장되어 있음 |
| RAM | 임의 접근 메모리. 프로그램 실행 시 데이터 저장 |
| 레지스터 | CPU 내부 메모리. 계산 시 데이터 임시 저장 공간 |

#### 지역변수와 전역변수
- 지역변수: 함수가 호출될 때 생성, 종료 시 소멸
- 전역변수: 프로그램 시작 시 생성, 종료 시 소멸

---

# Day 02 - 연산자 & 제어문
날짜: 2025-03-12  
깃허브 링크: [day02 폴더 바로가기](https://github.com/BojungChoi/C_Basic/tree/main/day02)

---

### 연산자 정리

#### 산술 연산자
| 연산자 | 설명 | 예제 (`a = 10, b = 3`) | 결과 |
|--------|------|-------------------|------|
| `+` | 덧셈 | `a + b` | `13` |
| `-` | 뺄셈 | `a - b` | `7` |
| `*` | 곱셈 | `a * b` | `30` |
| `/` | 나눗셈 | `a / b` | `3` (정수 나눗셈) |
| `%` | 나머지 | `a % b` | `1` |

#### 논리 연산자
| 연산자 | 설명 | 예제 (`a = 1, b = 0`) | 결과 |
|--------|------|------------------|------|
| `&&` | AND | `a && b` | `0` |
| `∥` | OR | `a∥b` | `1` |
| `!` | NOT | `!a` | `0` |

---

### 제어문

#### 조건문
```c
if (조건) {
  실행문;
} else if (조건) {
  실행문;
} else {
  실행문;
}
```

#### 반복문
```c
for (초기식; 조건식; 증감식) {
  실행문;
}

while (조건식) {
  실행문;
}

do {
  실행문;
} while (조건식);
```

---

# Day 03 - 포인터 심화 학습

날짜: 2025-03-13  
깃허브 링크: [day03 폴더 바로가기](https://github.com/BojungChoi/C_Basic/tree/main/day03)

---

### 학습 주제
- 포인터와 배열의 관계
- `*`와 `&` 연산자의 정확한 의미와 사용법
- 포인터 주소값과 자료형에 따른 크기 차이
- `scanf_s` 사용 시 `sizeof`가 필요한 이유

---

### 포인터와 배열
- 배열 이름은 포인터 상수처럼 동작  
  예시: `int arr[5];`  
  `arr`은 `&arr[0]`과 동일한 메모리 주소를 가리킨다.

```c
int arr[3] = {10, 20, 30};
int *p = arr;

printf("%d\n", *p);        // 10
printf("%d\n", *(p + 1));  // 20
printf("%d\n", *(p + 2));  // 30
```

---

### `*`와 `&`의 정확한 의미

| 기호 | 의미 | 예제 |
|------|------|------|
| `*` | 역참조 (포인터가 가리키는 값 접근) | `*ptr = 100;` |
| `&` | 주소값 취득 | `ptr = &a;` |

```c
int a = 10;
int *ptr = &a;

printf("%p\n", ptr);  // 주소 출력
printf("%d\n", *ptr); // 값 출력
```

---

### 포인터 주소값과 자료형 크기

- 포인터는 자료형에 상관없이 주소값만 저장  
- 크기는 시스템 아키텍처 기준  
  - 32비트 시스템: 4바이트  
  - 64비트 시스템: 8바이트

```c
int *p1;
char *p2;
double *p3;

printf("%d\n", sizeof(p1)); // 8 (64비트)
printf("%d\n", sizeof(p2)); // 8
printf("%d\n", sizeof(p3)); // 8
```

#### 주의
- 역참조(`*ptr`)할 때 자료형 크기에 맞게 처리됨  
  `int *`는 4바이트, `char *`는 1바이트

---

### `scanf_s`와 `sizeof`가 필요한 이유

- `scanf_s`는 버퍼 오버플로 방지 목적  
- 문자열 입력 시 반드시 버퍼 크기 명시 필요

```c
char str[10];
scanf_s("%s", str, (unsigned)_countof(str)); // 또는 sizeof(str)
```

#### 왜 문자열만?  
- 문자열(`%s`)은 포인터만 전달 → 크기를 알 수 없음  
- 명시적으로 버퍼 크기를 넘겨줘야 안전

---

### 정리 요약
- 포인터는 주소값 저장, `*`와 `&`로 값과 주소를 다룸  
- 배열과 포인터는 유사하지만 다르며, 배열 이름은 상수 포인터  
- 포인터 크기는 시스템 기준으로 고정  
- `scanf_s`는 문자열 입력 시 추가 인자 필요 (버퍼 크기)

---

## Day 04 - 배열과 포인터


날짜: 2025-03-14  
깃허브 링크: [day04 폴더 바로가기](https://github.com/BojungChoi/C_Basic/tree/main/day04)

---


## `getchar()` 함수
- **키보드로부터 한 문자 입력을 받는 함수**.
- 입력한 **한 문자를 그대로 반환**한다.
- 버퍼에 남아있는 문자도 순차적으로 읽을 수 있다.
- `Enter`를 입력해야 함수가 동작한다 (입력이 완료됨을 의미).

### 기본 사용법
```c
#include <stdio.h>

int main() {
    char ch;
    
    printf("문자를 입력하세요: ");
    ch = getchar();  // 사용자 입력 한 글자 읽기
    
    printf("입력한 문자: %c\n", ch);
    
    return 0;
}
```

### 여러 문자 연속 입력 (반복문 사용)
```c
#include <stdio.h>

int main() {
    char ch;

    printf("여러 문자를 입력하고 Enter를 누르세요: \n");

    while ((ch = getchar()) != '\n') {
        printf("입력한 문자: %c\n", ch);
    }

    printf("입력이 끝났습니다.\n");

    return 0;
}
```

---
## `putchar()` 함수
- 문자 **한 개를 출력**하는 함수.
- 괄호 안에 **문자 리터럴**이나 **문자 변수**를 넣어서 출력할 수 있음.
- 반환값은 출력한 문자를 그대로 반환한다.

### 기본 사용법
```c
#include <stdio.h>

int main() {
    char ch = 'A';
    
    putchar(ch);   // A 출력
    putchar('\n'); // 줄바꿈

    return 0;
}
```

### 반복문으로 문자 여러 개 출력
```c
#include <stdio.h>

int main() {
    char str[] = "Hello";
    int i = 0;
    
    while (str[i] != '\0') {
        putchar(str[i]);
        i++;
    }

    putchar('\n');

    return 0;
}
```

## `getchar()` + `putchar()` 콜라보 예제
```c
#include <stdio.h>

int main() {
    char ch;

    printf("문자를 입력하고 Enter를 누르세요: \n");

    while ((ch = getchar()) != '\n') {
        putchar(ch);  // 입력한 문자 그대로 출력
    }

    putchar('\n');
    
    return 0;
}
```

---


###  배열 (Array)
- 같은 타입의 여러 데이터를 하나의 변수 이름으로 관리하는 자료구조.
- 인덱스를 통해 각 요소에 접근 가능 (`0`부터 시작).

```c
#include <stdio.h>

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    
    printf("첫 번째 값: %d\n", arr[0]);
    printf("세 번째 값: %d\n", arr[2]);
    
    return 0;
}
```

---

### `static` 변수
- 함수 내에서 선언되면, **한 번만 초기화**되고 프로그램이 끝날 때까지 유지됨.
- 전역 변수처럼 메모리에 유지되지만, **블록 스코프를 가짐**.

```c
#include <stdio.h>

void counter() {
    static int count = 0;  // static 변수
    count++;
    printf("count: %d\n", count);
}

int main() {
    counter();  // count: 1
    counter();  // count: 2
    counter();  // count: 3
    
    return 0;
}
```

---
## 'strcpy()' 함수

### 기본 개념
`strcpy()`는 C/C++에서 문자열을 복사할 때 사용하는 함수.  
원본 문자열(`source`)을 복사 대상(`destination`)에 **널 문자(`\0`)까지 복사**

### 함수 원형
```cpp
char* strcpy(char* destination, const char* source);
```
```cpp
char src[] = "Hello";
char dest[10];

strcpy(dest, src);  // dest는 "Hello"가 된다
```



### `strcmp()` 함수
- 문자열을 비교하는 함수 (`string compare`).
- `<string.h>` 라이브러리에 포함.
- 반환값:
  - `0` : 두 문자열이 같음
  - 양수(1) : 첫 번째 문자열이 사전순으로 더 큼
  - 음수(-1) : 첫 번째 문자열이 사전순으로 더 작음

```c
#include <stdio.h>
#include <string.h>

int main() {
    char str1[] = "apple";
    char str2[] = "banana";
    
    int result = strcmp(str1, str2);
    
    if (result == 0) {
        printf("두 문자열이 같습니다.\n");
    } else if (result < 0) {
        printf("str1이 str2보다 사전순으로 앞섭니다.\n");
    } else {
        printf("str1이 str2보다 사전순으로 뒤섭니다.\n");
    }
    
    return 0;
}
```

---

### 문자열 (String)
- `char` 배열로 표현.
- 문자열 끝에는 `\0`이 자동으로 들어감 (널 문자).

```c
#include <stdio.h>

int main() {
    char str[10] = "Hello";
    
    printf("문자열 출력: %s\n", str);
    printf("첫 번째 문자: %c\n", str[0]);
    
    return 0;
}
```

---

### 값 전달 (Value)
- 함수 호출 시 인자로 **값을 복사해서 전달**.
- 원본 값은 변하지 않음.

```c
#include <stdio.h>

void changeValue(int x) {
    x = 100;
}

int main() {
    int num = 50;
    
    changeValue(num);
    printf("num 값: %d\n", num);  // 50 (원본 값은 변화 없음)
    
    return 0;
}
```

---

### 포인터 변수 (Pointer Variable)
- **주소값**을 저장하는 변수.
- `*`와 `&` 기호를 사용.
- `*` : 포인터가 가리키는 값
- `&` : 변수의 주소값

```c
#include <stdio.h>

int main() {
    int num = 10;
    int *ptr = &num;  // num의 주소 저장
    
    printf("num의 주소값: %p\n", &num);
    printf("ptr이 가리키는 주소값: %p\n", ptr);
    printf("ptr이 가리키는 값: %d\n", *ptr);
    
    *ptr = 20;  // 포인터를 통해 값 변경
    printf("num의 값: %d\n", num);
    
    return 0;
}
```

---

### 포인터를 이용한 값 전달
- 포인터를 인자로 넘기면, **원본 값 수정 가능**.

```c
#include <stdio.h>

void changeValue(int *x) {
    *x = 100;
}

int main() {
    int num = 50;
    
    changeValue(&num);
    printf("num 값: %d\n", num);  // 100 (원본 값이 변경됨)
    
    return 0;
}
```

---

###  요약
| 개념         | 설명                                                  |
|--------------|-------------------------------------------------------|
| 배열(Array)  | 같은 타입의 데이터를 순차적으로 저장하는 자료구조     |
| static 변수  | 함수가 끝나도 값이 유지되는 지역 변수                 |
| strcmp()     | 문자열 비교 함수, 같으면 0 반환                       |
| 문자열(String) | `char` 배열로 구현, `\0`으로 끝남                  |
| 값 전달      | 함수에 값을 복사해서 넘김, 원본은 변경 안됨          |
| 포인터       | 변수의 주소를 저장하는 변수, 원본 값 변경 가능        |

---

## 코드 세그먼트, 데이터 세그먼트, 힙, 스택

- 데이터 세그먼트 : 전역변수와 정적변수가 저장되는 메모리 영역
	- 힙 : 사용자에게 의해 동적으로 할당되는 메모리 영역
	- 스택 : 함수 호출 시 생성되는 지역변수와 매개변수가 저장되는 메모리 영역
	- data : 전역변수와 정적변수가 저장되는 메모리 영역	
	- rod : 문자열 상수 , 리터럴


- 코드 세그먼트: 프로그램 코드가 저장되는 메모리 영역


## 배열과 포인터 차이 정리

### 선언 비교

| 선언               | 의미                                      |
|--------------------|-------------------------------------------|
| `int (*pary)[4]`   | `int[4]` 배열을 가리키는 **포인터**       |
| `int* pary[4]`     | `int*` 포인터 4개가 들어있는 **배열**      |

---

## 설명

### `int (*pary)[4];`

- `pary`는 포인터입니다.
- **`int`형 4개짜리 배열을 가리키는 포인터**입니다.
- 메모리 구조상, 배열 전체를 가리키고 있습니다.

#### 예제
```c
int arr[4] = {1, 2, 3, 4};
int (*pary)[4] = &arr;

// 배열 전체를 가리키므로 이렇게 사용 가능
printf("%d\n", (*pary)[0]);  // 1
printf("%d\n", (*pary)[1]);  // 2
```


---

# Day 05 - 동적 메모리 할당(예정)


날짜: 2025-03-17 
깃허브 링크: [day05 폴더 바로가기]()

---

## 이중 포인터 (Double Pointer)

### 기본 개념

| 구분                | 설명                                                                 |
|---------------------|----------------------------------------------------------------------|
| 개념                | 포인터를 가리키는 포인터 (Pointer to Pointer)                       |
| 선언 방법           | `int **pp;`                                                         |
| 예시                | `char **argv == char *argv[]`                                        |
| 사용 목적           | 다차원 배열 처리, 포인터 배열, 동적 메모리 할당 등                  |
| 접근 방법           | `**pp`를 통해 실제 값을 참조                                         |
| 주요 사용 사례      | main 함수에서 `char **argv`, 포인터 배열 다룰 때 사용                |

---

### 코드 예시
```c
int n = 10;
int *p = &n;
int **pp = &p;

printf("%d\n", **pp);  // 출력 결과: 10
```

---
## 메모리 동적 할당 (malloc, free, calloc, realloc)

### 기본 개념
- 프로그램 실행 중에 필요한 메모리를 동적으로 할당하고 해제하는 방식.
### 코드 예시
```c
#include <stdio.h>
#include <stdlib.h>

int main() {
    int *p;

    p = (int *)malloc(sizeof(int) * 5);   // 초기화 안 됨
    p = (int *)calloc(5, sizeof(int));    // 0으로 초기화됨
    p = (int *)realloc(p, sizeof(int) * 10);  // 크기 재조정

    free(p);  // 메모리 해제
    return 0;
}
```
| 함수명      | 기능                                            | 초기화 여부 |
|-------------|-------------------------------------------------|-------------|
| `malloc()`  | 메모리 공간 할당 (초기화 안 됨)                | ❌          |
| `calloc()`  | 메모리 공간 할당 후 0으로 초기화               | ✅          |
| `realloc()` | 기존 할당 메모리 크기 재조정                   | -           |
| `free()`    | 할당된 메모리 공간 해제                        | -           |

---
## 구조체 포인터 (Structure Pointer)

### 기본 개념
- 구조체 변수의 주소를 포인터로 저장하고 멤버에 접근할 때 사용.
```c
#include <stdio.h>

typedef struct {
    int kor;
    int eng;
    int mat;
} SCORE;

int main() {
    SCORE s = {90, 80, 70};
    SCORE *ps = &s;

    printf("%d\n", (*ps).mat);  // 점 연산자 사용
    printf("%d\n", ps->mat);    // 화살표 연산자 사용

    return 0;
}

```
| 구분               | 설명                                                    | 예시                  |
|--------------------|---------------------------------------------------------|-----------------------|
| 구조체 멤버 접근    | 점 연산자 사용                                           | `변수명.멤버`         |
| 구조체 포인터 접근 | 화살표 연산자 사용                                      | `포인터명->멤버`      |
| 동일한 의미        | `(*포인터명).멤버` == `포인터명->멤버`
## 사용자 정의 자료형
- 사용자가 직정 정의한 새로운 자료형
### struct (구조체)
- 서로다른 타입의 데이터를 하나로 묶는 자료형.
```c
struct Person {
    char name[20];
    int age;
};

struct Person p1 = {"홍길동", 30};
printf("이름: %s, 나이: %d\n", p1.name, p1.age);

```

### union (공용체)
- 하나의 메모리 공간을 여러 데이터 타입이 공유하는 자료형
```c
union Data {
    int i;
    float f;
    char str[20];
};

union Data data;
data.i = 10;     // i에 값 저장
data.f = 3.14;   // f 저장 시 i 값 덮어씀

```
| 항목            | struct                      | union                       |
|-----------------|-----------------------------|-----------------------------|
| 메모리 크기     | 모든 멤버 크기의 합         | 가장 큰 멤버 하나의 크기    |
| 값 저장 방식    | 모든 멤버 개별 저장 가능    | 한 번에 하나만 저장 가능     |
| 용도            | 다양한 데이터 관리         | 메모리 절약, 다형 데이터 처리 |


## 요약
- 이중 포인터는 포인터를 가리키는 포인터다.
- 동적 메모리 할당은 실행 중 메모리를 동적으로 관리한다.
- 구조체 포인터는 화살표(->) 연산자로 멤버에 접근한다.
- 사용자 정의 자료형은 데이터를 그룹화하여 효율적으로 설계한다.

| 주제                | 핵심 내용                                           |
|---------------------|------------------------------------------------------|
| 이중 포인터         | 포인터를 가리키는 포인터 (다차원 배열, 포인터 배열 등) |
| 동적 메모리 할당    | `malloc`, `calloc`, `realloc`, `free`로 메모리 관리  |
| 구조체 포인터       | `->` 연산자로 멤버 접근, `(*포인터).멤버`와 동일 의미 |
| 사용자 정의 자료형  | `struct`, `union`, `enum`으로 데이터 구조 설계        |





---

# Day 06 (c++ day01) - c++ 기초 시작!


날짜: 2025-03-18
깃허브 링크: [day06 폴더 바로가기]()

---

    - new는 메모리 동적 할당 + 생성자 호출로 객체 생성 및 초기화 가능

    - delete는 동적으로 할당한 메모리를 반드시 해제해주는 역할

    - 디폴트 매개변수는 함수 호출 시 인자 생략이 가능하도록 기본값을 설정하는 기능

    - using namespace는 네임스페이스 생략을 가능하게 해주는 기능 (주의해서 사용)

---

### 메모리 동적 할당 (new / delete)

#### 기본 문법
```cpp
자료형* 포인터변수 = new 자료형(초기값);         // 변수 1개 동적 할당
자료형* 포인터배열 = new 자료형[크기];          // 배열 동적 할당

int* pnum = new int(10);          // 값 10으로 초기화된 int 메모리 할당
int* parray = new int[5];         // int형 배열 5개 메모리 할당
```
    - new는 메모리를 할당, 생성자를 호출하여 초기화까지 수행
    - 객체를 생성할 때도 new 를 사용하면 생성자가 호출되어 객체가 초기화 됨.
        - 생성자(Constructor)란?
            - 객체를 생성하고 초기화하는 특별한 메소드
            - 생성자는 객체가 만들어질 때 자동으로 호출된다.


### 디폴트 매개변수
    - 함수 호출 시 인자를 전달하지 않으면, 함수에서 미리 지정한 기본값을 사용하는 기능

```cpp
void func(int a = 10, int b = 20);

func();          // a=10, b=20
func(5);         // a=5,  b=20
func(5, 15);     // a=5,  b=15

```
#### 특징
    - 오른쪽부터 기본값을 지정
    ```cpp
    void func(int a, int b = 20, int c = 30); // OK
    void func(int a = 10, int b, int c = 30); // 에러!
    ```
    - 함수 선언부에만 기본값을 명시, 정의부에서는 생략하는게 일반적


### 함수 오버로딩, 오버라이딩, 다형성 정리 

####  함수 오버로딩(Overloading), 함수 오버라이딩(Overriding), 다형성(Polymorphism)

| 구분              | 함수 오버로딩 (Overloading)  | 함수 오버라이딩 (Overriding) | 다형성 (Polymorphism)        |
|------------------|------------------------------|------------------------------|-----------------------------|
| 언제 결정?        | 컴파일 시간 (정적 바인딩)      | 실행 시간 (동적 바인딩)        | 둘 다 포함 (정적 / 동적)     |
| 상속 필요?        | ❌ 필요 없음                   | ✅ 필요 (부모-자식 클래스 관계) | ✅ 보통 오버라이딩 통해 구현 |
| 기준              | 매개변수 타입/개수 다르면 OK   | 부모 메서드와 완전 동일해야 함  | 같은 이름 다른 동작 수행     |
| 키워드            | 없음                         | `virtual`, `override` 사용    | `virtual` 기반이 많음       |
| 목적              | 다양한 입력 처리             | 부모 메서드 기능 재정의        | 타입에 따라 다르게 동작     |

---

###  C와 C++ 함수 구분 기준

| 구분        | C                          | C++                                              |
|------------|----------------------------|--------------------------------------------------|
| 함수 구분 기준 | 함수 이름만으로 구분            | 함수 이름 + 매개변수 시그니처로 구분 (네임 맹글링) |
| 오버로딩 가능? | ❌ 불가능                   | ✅ 가능                                          |
| 내부 심볼 이름 | 함수 이름 그대로 사용          | 매개변수 정보가 포함된 이름 (Name Mangling 적용)  |
| 예시        | `add`                     | `_Z3addii`, `_Z3adddd` (다른 심볼로 관리됨)     |
| 외부 연결    | 기본 C 스타일              | `extern "C"` 사용 시 C 스타일로 심볼 노출        |

---

#### 추가 설명
- `extern "C"`를 사용하면 C++ 코드에서 C 스타일의 함수 호출 가능 (네임 맹글링 방지)
- 오버라이딩은 주로 런타임 다형성을 구현할 때 사용
- 오버로딩은 함수의 편의성과 코드 직관성을 높이기 위해 사용

---

### 포인터(Pointer) vs 참조자(Reference) 비교

| 항목            | 포인터 (Pointer)              | 참조자 (Reference)            |
|-----------------|-------------------------------|-------------------------------|
| 기본 개념       | 변수의 메모리 주소를 저장하는 변수 | 변수의 또 다른 이름(별칭)     |
| 선언 방법       | `int* p = &n;`                | `int& ref = n;`               |
| 값 접근 방법    | `*p`                          | `ref`                         |
| 값 변경 방법    | `*p = 20;`                   | `ref = 20;`                   |
| 초기화          | 초기화하지 않아도 선언 가능 (널 포인터 허용) | 반드시 초기화 필요 (NULL 불가) |
| NULL 가능 여부  | 가능 (`p = nullptr;`)         | 불가능                        |
| 재참조(다른 변수 참조) | 가능 (`p = &m;`)               | 불가능 (초기화 후 다른 변수 참조 불가) |
| 간접 참조 연산자 | `*` (역참조 연산자 필요)      | 필요 없음 (바로 사용 가능)    |
| 메모리 주소 접근 | `p` (주소값 저장 변수 자체가 주소값) | `&ref` (참조하는 변수의 주소) |
| 사용 목적       | 동적 메모리 할당, 배열 처리, 자료구조 구현 등 | 함수 인자 전달, 반환값 최적화 등 |
| 문법 난이도     | 다소 복잡 (널 체크 필요)      | 간단하고 안전함               |

---

>  **한줄 요약**  
> 포인터는 메모리 주소를 직접 다루는 강력한 도구지만 실수 위험이 있음!  
> 참조


### 상수 래퍼런스
- const : 리터럴은 원래 주소가 없음 / const &int 로 인해 임시객체를 생성, 주소를 만들어 참조
#### 상수 참조자 (Const Reference) 정리 표

| 구분                     | 일반 참조자 (`int&`)  | 상수 참조자 (`const int&`) |
|--------------------------|-----------------------|-----------------------------|
| 값 변경 가능 여부        | 가능                  | 불가능 (읽기 전용)           |
| r-value 참조 가능 여부   | 불가능                | 가능                       |
| 값 복사 여부            | 없음 (주소 참조)      | 없음 (주소 참조)            |
| 임시 객체 참조 가능 여부 | 불가능                | 가능                       |
| 사용 추천 상황          | 값 변경이 필요한 경우 | 값 변경이 필요 없고, 읽기만 하거나 효율성이 중요할 때 |
| 주 용도                 | 함수 매개변수 수정, 값 변경 | 함수 매개변수 전달 최적화, 임시 객체 참조 |

---

한줄 요약  
`const` 참조자는 값을 바꾸지 않는 안전한 참조이며, 임시 값(r-value)도 참조할 수 있다.  
그래서 값 복사를 줄이고 코드 안정성을 높일 때 필수로 사용된다.


---

# Day 07 (c++ day02) - 동적 메모리 할당(예정)


날짜: 2025-03-19
깃허브 링크: [day06 폴더 바로가기]()

---

## Class
    1. 접근제어 지시자(private, public, protected)
        private - 외부접근x
        public - 대중적. 외부접근O
        protected - 자신만 접근 상속의개념
    
    2. 멤버변수 - 속성, private 영역

    3. 멤버함수(메서드) - 기능 , public 영역

    객체
    인스턴스
    솔직히 실무에서는 거의 같은 의미로 막 섞어 씀.
    다만 시험이나 개념 잡을 땐,

    "객체" = 존재하는 놈
    "인스턴스" = 특정 클래스 기반에서 나온 놈
    이렇게 구분해주면 OK!

    생성자 - 출력이없다. 클래스 이름과 동일


## 동적 메모리 할당  
`new`와 `delete`를 사용하여 **힙 메모리**를 직접 관리합니다.  
문자열을 복사할 때 `strlen()`과 `strcpy()`를 사용하여 정확한 크기를 할당하고 복사합니다.

### 문자열 동적 할당 & 복사 예시
```cpp
const char* source = "Hello";
char* dest = new char[strlen(source) + 1]; // +1은 널 문자 공간 확보
strcpy(dest, source);  // 문자열 복사
delete[] dest;  // 메모리 해제
```

---
## 생성자와 소멸자
 - 생성자(Constructor)	객체 생성 시 자동 호출. 멤버 초기화 담당. 리턴 타입 없음!
 - 소멸자(Destructor)	객체 소멸 시 자동 호출. 동적 할당 메모리 해제. 이름은 ~클래스명()
``` cpp
class Human {
private:
    char* pname;
public:
    Human(const char* name) {
        pname = new char[strlen(name) + 1];
        strcpy(pname, name);
    }

    ~Human() {
        delete[] pname;
    }
};
```
---

##  NEW / DELETE 사용법

```cpp
char* p = new char[10];
delete[] p;
```
---
## 포인터를 통해 멤버 함수 호출하는 두 가지 방법

| 방식                      | 예시                  | 설명                        |
|---------------------------|-----------------------|-----------------------------|
| 역참조 방식               | `(*ptr).함수();`      | 포인터를 역참조한 후 접근하는 방법. 가독성이 떨어져서 잘 안 씀 |
| 포인터 멤버 접근 연산자 방식 | `ptr->함수();`        | 포인터에서 멤버에 바로 접근하는 방법. 간결하고 가장 많이 사용됨 |



---

## 클래스 다지기

    - const	: 함수 내부에서 멤버 변수 값을 변경하지 않음을 보장
```cpp
class MyClass {
public:
    void GetData() const {
        // 멤버 변수 수정 불가!
        cout << "이 함수는 멤버를 바꾸지 않습니다." << endl;
    }
};
```
---
## 문자열 처리 방법
| 방법          | 예시                                               | 설명                                           |
|---------------|----------------------------------------------------|------------------------------------------------|
| 배열 사용     | `char str[20] = "문자열";`                        | 크기가 고정되어 있으며 스택 메모리에 저장됨    |
| 포인터 사용   | `const char* pstr = "문자열";`                    | 읽기 전용 메모리(텍스트 영역)를 가리킴         |
| 동적 할당 사용 | `char* dynStr = new char[strlen(src) + 1];`<br>`strcpy(dynStr, src);` | 힙 메모리에 저장되고, 원하는 크기로 할당 가능  |

---
## 콜론 초기화 리스트
    - 하는 이유
        - const 멤버 변수 초기화 필수
            - 생성자 본문에서는 값 변경 불가. 초기화 리스트 필수!
        - 참조형 멤버 변수 초기화 필수
            - 참조는 선언과 동시에 초기화 되어야 함
        - 다른 객체 멤버 초기화 시 기본 생성자 피할 수 있음
            - 초기화 리스트로 생성자 직접 호출
        - 성능 최적화 (불필요한 디폴트 생성자 호출 방지)
            - 초기화 리스트는 멤버 초기화가 바로 일어나서 효율적
```cpp
class MyClass {
private:
    const int a;
    int b;
public:
    MyClass(int _a, int _b) : a(_a), b(_b) { }
};
```
