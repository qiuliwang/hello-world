###本文件夹包含以下内容

作者：Parallelc
链接：https://www.zhihu.com/question/57113414/answer/151665494
来源：知乎
著作权归作者所有，转载请联系作者获得授权。

容器相关：

vector 不定长数组，图的邻接表常用vector+数组或vector套vector来表示

list 双向链表， stack 栈

queue 单向队列，用于BFS等

priority_queue 优先队列，用于堆优化等

pair 键值对

set 集合， map 映射

multiset， multimap 允许重复的set和map

bitset 位集合

函数：

min, max 求最小值，最大值

swap 交换两个元素

sort，stable_sort 排序

lower_bound，upper_bound，binary_search，equal_range 二分查找

next_permutation 求下一个字典序，常先sort然后与do...while结合进行全排列遍历

random_shuffle 打乱一段区间


2.进阶的东西

valarray 数值数组

complex 复数类

下面的很多东西其实自己手动实现也并不麻烦

find，find_if 区间内查找元素

count， count_if 区间内统计元素

search 区间内查找子区间

min_element，max_element 找区间的最小值， 最大值

fill 填充区间

unique 去重，需要先sort，并且不是真正的去重

reverse 反转区间

merge 合并两个有序区间

swap_range 交换两个区间

adjacent_find 区间内查找相邻的相同的元素

mismatch 找两个区间第一个不同的地方

equal 比较两个区间是否相等

partition，stable_partition 把区间一分为二

partial_sort 局部排序

nth_element 把第n大的元素放在其相应位置，左边都比它小，右边都比它大，但不保证有序

set_union，set_intersection，set_difference，set_symmetric_difference 求有序集合的并，交，差，对称差

make_heap，push_heap，pop_heap，sort_heap 对一段区间建立堆，插入堆，弹出堆，堆排序

其实上面的东西已经包含了algorithm的大多数内容，剩下的你看http://www.cplusplus.com/reference/algorithm/就行了

numeric里还有几个

accumulate 求一段区间的累和或累乘等

adjacent_difference 求一段区间各元素的相邻差

inner_product 求两个区间对应元素乘积的和

partial_sum 求一段区间各个位置的前缀和
