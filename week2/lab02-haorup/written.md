**1.Explain what you think the worst-case big O complexity and the best-case big O complexity of bubble sort is as implemented in our code. Give reasons for why you think that is the big O complexity for each case.**
- **Worst case:** the original array is in reverse order.
- *Reason:* Given what the algorithm was coded, there are always two layers of loop in the bubble sort, all elements in the array is supposed to be compared with the next neighbor in array. The times of comparison are always N(N - 1), N is the number of elements in array. But there should be the most times of swap under the worst case. The largest number needs (N - 1) times of swap since it is going to be moved from the leftmost position to the righmost, and each number can only be swapped with the right neighbor. As a result, there should be N(N - 1)/2 swap.

- **Best case:** the original array is already in ascending order.
- *Reason:* As mentioned above, there are always N(N - 1) times of comparison no matter what the original order is. But in the best case, there is no need for swap since every number is already ordered. So this would be the best case since no swap is needed in this case.


\
**2. Is there a more efficient way to write bubble sort that changes the performance in the best case? If so, describe (in general terms, we don't need the exact C code) how that implementation of bubble sort would be different.**

Yes, there is.

The original code always need (N - 1) times of comparisons in every loop and N(N - 1) comparisons in total. However, if the right parts of array is already ordered, there is no need to compare them again. In this case, there are only N(N - 1)/2 comparisons. So, some changes in the inner loop can be made so that the iteration can stop at the first elements of the already ordred part. After each outer loop, there will be a new elements added to the right already ordered part. So the counter in the outer loop can be used in inner loop to decide where to stop.
Another change that can be made is adding a conditional block. In the best case, there is no swap in the first iteration, which means the array is already ordered. The conditional block can be used to stop sorting if no swap in the first loop. This will save a lot of time for the best case.

\
**3. Explain what you think the worst-case big O complexity and the best-case big O complexity of selection sort is as you've implemented it. Why do you think that?**

- **Worst case:** the original array is in reverse order.
- *Reason:* Starting from the leftmost element in array, the element is compared with all other elements, so there are (N - 1) times of comparions. One time swap is needed, and the minimum number is in position. In the next loop, starting from the second element, there are (N - 2) times of comparison, and one swap is needed. Similar process keep going until all elements are ordered. So, there are N(N - 1)/2 times of comparisons and (N - 1) times of swap.

- **Best case:** the original array is already in ascending order.
- *Reason:* The comparison process keep going similar to the worst case, but no swap is needed. So, there are N(N -1)/ 2 times of comparisons and 0 times of swap.

\
**4. Does selection sort require any additional storage (i.e. did you have to allocate any extra memory to perform the sort?) beyond the original array?**  \
Yes. In every loop it requires extra memory to store the index of minimum element in array.

\
**5. Explain what you think big O complexity of sorting algorithm that is built into the C libraries is. Why do you think that? Do a little bit of research to try to answer this one - it's a preview of the faster sorts we'll see soon.**  \
I think it's *O(n)*.
As we can see from the experiment results, the time of *csort* increase linearly with the increasing of data size. If the size of data increases by 10 times, time taken grow by 10 folds. Bubble sort and selection sort behave as quadratic growth because the time grow by 100 folds when the data size increase by 10 times.