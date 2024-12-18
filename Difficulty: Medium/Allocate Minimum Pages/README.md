<h2><a href="https://www.geeksforgeeks.org/problems/allocate-minimum-number-of-pages0937/1">Allocate Minimum Pages</a></h2><h3>Difficulty Level : Difficulty: Medium</h3><hr><div class="problems_problem_content__Xm_eO" style="user-select: auto;"><p style="user-select: auto;"><span style="font-size: 14pt; user-select: auto;">You are given an array <code style="user-select: auto;">arr[]</code> of integers, where each element <code style="user-select: auto;">arr[i]</code> represents the number of pages in the ith book. You also have an integer <code style="user-select: auto;">k</code> representing the number of students. The task is to allocate books to each student such that:</span></p>
<ul style="user-select: auto;">
<li style="user-select: auto;"><span style="font-size: 14pt; user-select: auto;">Each student receives <strong style="user-select: auto;">atleast</strong> one book.</span></li>
<li style="user-select: auto;"><span style="font-size: 14pt; user-select: auto;">Each student is assigned a contiguous sequence of books.</span></li>
<li style="user-select: auto;"><span style="font-size: 14pt; user-select: auto;">No book is assigned to more than one student.</span></li>
</ul>
<p style="user-select: auto;"><span style="font-size: 14pt; user-select: auto;">The objective is to minimize the maximum number of pages assigned to any student. In other words, out of all possible allocations, find the arrangement where the student who receives the most pages still has the smallest possible maximum.</span></p>
<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Note</strong>: Return <strong style="user-select: auto;">-1</strong> if a valid assignment is not possible, and allotment should be in contiguous order (see the explanation for better understanding).</span></p>
<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Examples:</strong></span></p>
<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input: </strong>arr[] = [12, 34, 67, 90], k = 2
<strong style="user-select: auto;">Output: </strong>113
<strong style="user-select: auto;">Explanation: </strong>Allocation can be done in following ways:
[12] and [34, 67, 90] Maximum Pages = 191
[12, 34] and [67, 90] Maximum Pages = 157
[12, 34, 67] and [90] Maximum Pages = 113.
Therefore, the minimum of these cases is 113, which is selected as the output.</span></pre>
<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input: </strong>arr[] = [15, 17, 20], k = 5
<strong style="user-select: auto;">Output: </strong>-1
<strong style="user-select: auto;">Explanation: </strong>Allocation can not be done.<br style="user-select: auto;"></span></pre>
<pre style="user-select: auto;"><span style="font-size: 14pt; user-select: auto;"><strong style="user-select: auto;">Input: </strong>arr[] = [22, 23, 67], k = 1
<strong style="user-select: auto;">Output: </strong>112</span></pre>
<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Constraints:</strong><br style="user-select: auto;">1 &lt;=&nbsp; arr.size() &lt;= 10<sup style="user-select: auto;">6</sup><br style="user-select: auto;">1 &lt;= arr[i] &lt;= 10<sup style="user-select: auto;">3<br style="user-select: auto;"></sup></span><span style="font-size: 18px; user-select: auto;">1 &lt;= k &lt;= 10<sup style="user-select: auto;">3&nbsp;</sup></span></p></div><p><span style=font-size:18px><strong>Company Tags : </strong><br><code>Infosys</code>&nbsp;<code>Amazon</code>&nbsp;<code>Microsoft</code>&nbsp;<code>Google</code>&nbsp;<code>Codenation</code>&nbsp;<code>Uber</code>&nbsp;<br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Searching</code>&nbsp;<code>Divide and Conquer</code>&nbsp;<code>Algorithms</code>&nbsp;