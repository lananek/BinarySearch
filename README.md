# BinarySearch
Реализовать бинарный поиск на массиве чисел, отсортированном в неубывающем порядке.
Запрещается использование готовых функций бинарного поиска из стандартных библиотек.

# Формат входных данных
В первой строке записано целое число $n$ — количество чисел в массиве 1≤n≤3x10^5.Во второй строке через пробел записаны n чисел массива. Все числа целые и принадлежат промежутку от -2^31 до 2^31 - 1 включительно. Числа в массиве упорядочены по неубыванию.В третьей строке записано целое число k — количество запросов 1≤n≤3x10^5.В четвёртой строке через пробел записаны k целых чисел-запросов из промежутка от -2^31 до 2^31 - 1 включительно.

# Формат выходных данных
Для каждого числа-запроса x в отдельной строке выведите через пробел числа b, l и r, где b равно 1, если x присутствует в массиве, или 0 в противном случае; l — индекс первого элемента, большего либо равного x; r — индекс первого элемента, большего x. Элементы массива нумеруются индексами от 0 до n-1.Если подходящих элементов в массиве нет, договоримся, что возвращаемое значение будет равно n.

# Пример
![image](https://user-images.githubusercontent.com/116422832/202836133-a838a914-eb97-4fd3-bbea-879099005f46.png)
