

<img src="img/green.png" width="50" height="50">

# Cpp-lab-2

## Задачи для практикума №2 (шаблоны функций)

### Задача №1


> Написать шаблонную функцию `msort`, сортирующую массив элементов `T` слиянием. Если тип элемента массива `char*`, то производится сортировка по длине строк.

Результатом решения задачи должен стать заголовочный файл `task1.h` и основной файл программы `main1.cpp` с демонстрацией работы шаблонной функции.

### Задача №2


> Написать шаблонную функцию `createArr`, создающую динамический массив элементов типа `T` размером `N`. Каждый элемент массива возвращается внешней шаблонной функцией `gen`, указатель на которую принимает функция `createArr`.
> 

Результатом решения задачи должен стать заголовочный файл `task2.h` и основной файл программы `main2.cpp` с демонстрацией работы шаблонной функции.

### Задача №3


> Написать шаблонную функцию `map`, принимающую по ссылке массив элементов типа `T` и выполняющую преобразование каждого элемента в соответетствии с шаблонной функцией `change`, указатель на которую передается в `map`.

Результатом решения задачи должен стать заголовочный файл `task3.h` и основной файл программы `main3.cpp` с демонстрацией работы шаблонной функции.
 
 
 
## Список участников/веток

|  ФИО              | Имя ветки |
|-------------------|-----------|
|Альперович	Вадим | b1|
|Андрющенко	Александр|b2|
|Аросланкин	Артем|b3|
|Востряков	Дмитрий|b4|
|Горбачева	Арина|b5|
|Горшкова	Екатерина|b6||
|Доненко	Денис|b7|
|Исупова	Мария|b8|
|Кислицына	Анастасия|b9|
|Куклин	Максим|b10|
|Лесин	Николай|b11|
|Макридин	Максим|b12|
|Максимов	Антон|b13|
|Малинин	Василий|b14|
|Мартиросян	Елизавета|b15|
|Мурзаев	Роман|b16|
|Сазанов	Дмитрий|b17|
|Седунов	Илья|b18|
|Сиднева	Анастасия|b19|
|Ситникова	Владислава|b20|
|Слесарева	Василина|b21|
|Смольникова	Полина|b22|
|Тюлин	Владислав|b23|
|Филиппова	Марина|b24|
|Черноземова	Дарья|b25|
|Чернышев	Константин|b26|
|Черняев	Ярослав|b27|
|Втюрин Павел|b28|
|Славутин Александр|b29|
|Семкин Павел|b30|

## Алгоритм выполнения работы

Для выполнения работы необходимо:

1. Выполнить *fork* репозитария в свой аккаунт.
1. Выполнить клонирование репозитария из своего аккаунта к себе на локальную машину (`git clone`).
1. Создать ветку **git** с индивидуальным номером (`git branch имя_ветки`).
1. Сделать ветку активной (`git checkout имя`).
1. Необходимо разместить как исходные файлы с решениями задач, поместив **cpp** файлы в **src**, а заголовочные - в **include**. 
1. Добавить файлы в хранилище (`git add`).
1. Выполнить фиксацию изменений (`git commit -m "комментарий"`).
1. Отправить содержимое ветки в свой удаленный репозитарий (`git push origin имя_ветки`).
1. Создать пул-запрос в репозитарий группы и ждать результата от **Travis-CI**.
