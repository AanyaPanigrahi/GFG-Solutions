<h2><a href="https://www.geeksforgeeks.org/problems/count-possible-triangles-1587115620/1">Count the number of possible triangles</a></h2><h3>Difficulty Level : Difficulty: Medium</h3><hr><div class="problems_problem_content__Xm_eO" style="user-select: auto;"><p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Given an integer array <strong style="user-select: auto;">arr[]</strong>. Find the number of triangles that can be formed with three different array elements as lengths of three sides of the triangle.&nbsp;</span></p>
<blockquote style="user-select: auto;">
<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">A triangle with three given sides is only possible if sum of any two sides is always greater than the third side.</span></p>
</blockquote>
<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Examples:</strong></span></p>
<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input</strong>: arr[] = [4, 6, 3, 7]
<strong style="user-select: auto;">Output</strong>: 3
<strong style="user-select: auto;">Explanation</strong>: There are three triangles possible [3, 4, 6], [4, 6, 7] and [3, 6, 7]. Note that [3, 4, 7] is not a possible triangle.  <br style="user-select: auto;"></span></pre>
<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input</strong>: arr[] = [10, 21, 22, 100, 101, 200, 300]
<strong style="user-select: auto;">Output</strong>: 6
<strong style="user-select: auto;">Explanation</strong>: There can be 6 possible triangles: [10, 21, 22], [21, 100, 101], [22, 100, 101], [10, 100, 101], [100, 101, 200] and [101, 200, 300]</span>
</pre>
<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input</strong>: arr[] = [1, 2, 3]
<strong style="user-select: auto;">Output</strong>: 0
<strong style="user-select: auto;">Explanation</strong>: No triangles are possible.</span></pre>
<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Constraints:</strong><br style="user-select: auto;">3 &lt;= arr.size() &lt;= 10<sup style="user-select: auto;">3</sup></span><br style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">0 &lt;= arr[i] &lt;= 10</span><sup style="user-select: auto;">5</sup></p></div><p><span style=font-size:18px><strong>Company Tags : </strong><br><code>Amazon</code>&nbsp;<code>Microsoft</code>&nbsp;<br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Arrays</code>&nbsp;<code>Sorting</code>&nbsp;<code>Data Structures</code>&nbsp;<code>Algorithms</code>&nbsp;