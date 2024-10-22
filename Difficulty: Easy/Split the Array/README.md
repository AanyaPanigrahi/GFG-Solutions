<h2><a href="https://www.geeksforgeeks.org/problems/split-the-array0238/1">Split the Array</a></h2><h3>Difficulty Level : Difficulty: Easy</h3><hr><div class="problems_problem_content__Xm_eO" style="user-select: auto;"><p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Given an array <strong style="user-select: auto;">arr[] </strong>of integers, the task is to count the number of ways to split given array elements into two non-empty subsets such that the XOR of elements of each group is equal. Each element should belong to exactly one subset.<br style="user-select: auto;">Note: </span></p>
<ol style="user-select: auto;">
<li style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">The answer could be very large so print it by doing modulo with 10<sup style="user-select: auto;">9</sup>&nbsp;+ 7.&nbsp;</span></li>
<li style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Subsets with the same elements but derived from different indices are different.</span></li>
</ol>
<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Examples:</strong></span></p>
<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input :</strong> arr[] = [1, 2, 3]
<strong style="user-select: auto;">Output :</strong> 3
<strong style="user-select: auto;">Explanation: </strong>{(1),(2, 3)}, {(2),(1, 3)}, {(3),(1, 2)} are three ways with equal XOR value of two groups.</span></pre>
<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input :</strong> arr[] = [5, 2, 3, 2]
<strong style="user-select: auto;">Output :</strong> 0<br style="user-select: auto;"><strong style="font-family: -apple-system, BlinkMacSystemFont, &quot;Segoe UI&quot;, Roboto, Oxygen, Ubuntu, Cantarell, &quot;Open Sans&quot;, &quot;Helvetica Neue&quot;, sans-serif; user-select: auto;">Explanation: </strong><span style="font-family: -apple-system, BlinkMacSystemFont, &quot;Segoe UI&quot;, Roboto, Oxygen, Ubuntu, Cantarell, &quot;Open Sans&quot;, &quot;Helvetica Neue&quot;, sans-serif; user-select: auto;">No way to split into </span><span style="font-family: -apple-system, BlinkMacSystemFont, &quot;Segoe UI&quot;, Roboto, Oxygen, Ubuntu, Cantarell, &quot;Open Sans&quot;, &quot;Helvetica Neue&quot;, sans-serif; user-select: auto;"> two groups whose XOR is equal.<br style="user-select: auto;"></span></span></pre>
<pre style="user-select: auto;"><span style="user-select: auto;"><strong style="user-select: auto;">Input :</strong> arr[] = [2, 2, 2, 2]
<strong style="user-select: auto;">Output :</strong> 7<br style="user-select: auto;"><strong style="font-family: -apple-system, BlinkMacSystemFont, &quot;Segoe UI&quot;, Roboto, Oxygen, Ubuntu, Cantarell, &quot;Open Sans&quot;, &quot;Helvetica Neue&quot;, sans-serif; user-select: auto;">Explanation: </strong>There are 7 ways to split the array into two groups with equal XOR, such that there are multiple combinations of </span>{(2), (2,2,2)},{(2,2),(2,2)}.</pre>
<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Constraints:<br style="user-select: auto;"></strong></span><span style="font-size: 18px; user-select: auto;">1&lt;=arr.size()&lt;=10<sup style="user-select: auto;">6</sup><br style="user-select: auto;">1&lt;=arr[i]&lt;=10<sup style="user-select: auto;">6</sup></span></p></div><br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Arrays</code>&nbsp;<code>Bit Magic</code>&nbsp;<code>Data Structures</code>&nbsp;