<h2><a href="https://www.geeksforgeeks.org/problems/count-distinct-elements-in-every-window/1">Count distinct elements in every window</a></h2><h3>Difficulty Level : Difficulty: Easy</h3><hr><div class="problems_problem_content__Xm_eO" style="user-select: auto;"><p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Given an integer array <strong style="user-select: auto;">arr[]</strong>&nbsp;and a number <strong style="user-select: auto;">k</strong>. Find the count of distinct elements in every window of size <strong style="user-select: auto;">k</strong> in the array.</span></p>
<p style="user-select: auto;"><strong style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Examples:</span></strong></p>
<pre style="user-select: auto;"><strong style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Input:</span></strong><span style="font-size: 18px; user-select: auto;"> arr[] = [1, 2, 1, 3, 4, 2, 3], k = 4
<strong style="user-select: auto;">Output:  </strong>[3, 4, 4, 3]<strong style="user-select: auto;">
Explanation: </strong>Window 1 of size k = 4 is 1 2 1 3. Number of distinct elements in this window are 3.&nbsp;
Window 2 of size k = 4 is 2 1 3 4. </span><span style="font-size: 18px; user-select: auto;">Number of distinct elements in this window are 4.</span>
<span style="font-size: 18px; user-select: auto;">Window 3&nbsp;of size k = 4 is&nbsp;1 3 4 2.&nbsp;</span><span style="font-size: 18px; user-select: auto;">Number of distinct elements in this window are 4.</span>
<span style="font-size: 18px; user-select: auto;">Window 4&nbsp;of size k = 4 is&nbsp;</span><span style="font-size: 18px; user-select: auto;">3 4 2 3. Number of distinct elements in this window are 3.</span>
</pre>
<pre style="user-select: auto;"><strong style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Input: </span></strong><span style="font-size: 18px; user-select: auto;">arr[] = [4, 1, 1], k = 2
<strong style="user-select: auto;">Output: </strong>[2, 1]<br style="user-select: auto;"><strong style="font-family: -apple-system, BlinkMacSystemFont, &quot;Segoe UI&quot;, Roboto, Oxygen, Ubuntu, Cantarell, &quot;Open Sans&quot;, &quot;Helvetica Neue&quot;, sans-serif; user-select: auto;">Explanation: </strong><span style="font-family: -apple-system, BlinkMacSystemFont, &quot;Segoe UI&quot;, Roboto, Oxygen, Ubuntu, Cantarell, &quot;Open Sans&quot;, &quot;Helvetica Neue&quot;, sans-serif; user-select: auto;">Window 1 of size k = 2 is 4 1. Number of distinct elements in this window are 2. <br style="user-select: auto;"></span>Window 2 of size k = 2 is 1 1. <span style="font-size: 18px; user-select: auto;">Number of distinct elements in this window is 1. </span></span></pre>
<pre style="user-select: auto;"><span style="font-size: 14pt; user-select: auto;"><strong style="user-select: auto;">Input: </strong>arr[] = [1, 1, 1, 1, 1], k = 3
<strong style="user-select: auto;">Output: </strong>[1, 1, 1]</span></pre>
<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></span><br style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">1 &lt;= k &lt;= arr.size() &lt;= 10<sup style="user-select: auto;">5</sup></span><br style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">1 &lt;= arr[i] &lt;= 10<sup style="user-select: auto;">5</sup></span></p></div><p><span style=font-size:18px><strong>Company Tags : </strong><br><code>Accolite</code>&nbsp;<code>Amazon</code>&nbsp;<code>Microsoft</code>&nbsp;<br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>sliding-window</code>&nbsp;<code>Hash</code>&nbsp;<code>Data Structures</code>&nbsp;<code>Algorithms</code>&nbsp;