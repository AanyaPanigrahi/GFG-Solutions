<h2><a href="https://www.geeksforgeeks.org/problems/find-the-sum-of-last-n-nodes-of-the-linked-list/1">Find the Sum of Last N nodes of the Linked List</a></h2><h3>Difficulty Level : Difficulty: Easy</h3><hr><div class="problems_problem_content__Xm_eO" style="user-select: auto;"><p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Given a single linked list, calculate the <strong style="user-select: auto;">sum </strong>of the last <strong style="user-select: auto;">n </strong>nodes.</span></p>
<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Note: It is guaranteed that n &lt;= number of nodes.</span></p>
<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Examples:</strong></span></p>
<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input: </strong>Linked List: 5-&gt;9-&gt;6-&gt;3-&gt;4-&gt;10, n = 3</span><br style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><img src="https://media.geeksforgeeks.org/img-practice/prod/addEditProblem/700594/Web/Other/blobid0_1720631715.png" width="400" height="90" style="user-select: auto;"><br style="user-select: auto;"><strong style="font-family: -apple-system, BlinkMacSystemFont, &quot;Segoe UI&quot;, Roboto, Oxygen, Ubuntu, Cantarell, &quot;Open Sans&quot;, &quot;Helvetica Neue&quot;, sans-serif; user-select: auto;">Output: </strong><span style="font-family: -apple-system, BlinkMacSystemFont, &quot;Segoe UI&quot;, Roboto, Oxygen, Ubuntu, Cantarell, &quot;Open Sans&quot;, &quot;Helvetica Neue&quot;, sans-serif; user-select: auto;">17<br style="user-select: auto;"></span></span><strong style="font-size: 18px; font-family: -apple-system, BlinkMacSystemFont, &quot;Segoe UI&quot;, Roboto, Oxygen, Ubuntu, Cantarell, &quot;Open Sans&quot;, &quot;Helvetica Neue&quot;, sans-serif; user-select: auto;">Explanation: </strong><span style="font-size: 18px; font-family: -apple-system, BlinkMacSystemFont, &quot;Segoe UI&quot;, Roboto, Oxygen, Ubuntu, Cantarell, &quot;Open Sans&quot;, &quot;Helvetica Neue&quot;, sans-serif; user-select: auto;">The sum of the last three nodes in the linked list is 3 + 4 + 10 = 17.</span></pre>
<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input: </strong>Linked List: 1-&gt;2, n = 2</span><br style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><img src="https://media.geeksforgeeks.org/img-practice/prod/addEditProblem/700594/Web/Other/blobid1_1720631747.png" width="400" height="90" style="user-select: auto;"><br style="user-select: auto;"><strong style="font-family: -apple-system, BlinkMacSystemFont, &quot;Segoe UI&quot;, Roboto, Oxygen, Ubuntu, Cantarell, &quot;Open Sans&quot;, &quot;Helvetica Neue&quot;, sans-serif; user-select: auto;">Output: </strong><span style="font-family: -apple-system, BlinkMacSystemFont, &quot;Segoe UI&quot;, Roboto, Oxygen, Ubuntu, Cantarell, &quot;Open Sans&quot;, &quot;Helvetica Neue&quot;, sans-serif; user-select: auto;">3<br style="user-select: auto;"></span></span><strong style="font-size: 18px; font-family: -apple-system, BlinkMacSystemFont, &quot;Segoe UI&quot;, Roboto, Oxygen, Ubuntu, Cantarell, &quot;Open Sans&quot;, &quot;Helvetica Neue&quot;, sans-serif; user-select: auto;">Explanation: </strong><span style="font-size: 18px; font-family: -apple-system, BlinkMacSystemFont, &quot;Segoe UI&quot;, Roboto, Oxygen, Ubuntu, Cantarell, &quot;Open Sans&quot;, &quot;Helvetica Neue&quot;, sans-serif; user-select: auto;">The sum of the last two nodes in the linked list is 2 + 1 = 3.</span></pre>
<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Constraints:<br style="user-select: auto;"></strong></span><span style="font-size: 18px; font-family: -apple-system, BlinkMacSystemFont, &quot;Segoe UI&quot;, Roboto, Oxygen, Ubuntu, Cantarell, &quot;Open Sans&quot;, &quot;Helvetica Neue&quot;, sans-serif; user-select: auto;">1 &lt;= number of nodes, n &lt;= 10<sup style="user-select: auto;">5</sup><br style="user-select: auto;"></span><span style="font-family: -apple-system, BlinkMacSystemFont, &quot;Segoe UI&quot;, Roboto, Oxygen, Ubuntu, Cantarell, &quot;Open Sans&quot;, &quot;Helvetica Neue&quot;, sans-serif; font-size: 18px; user-select: auto;">1 &lt;= node-&gt;data &lt;= 10<sup style="user-select: auto;">3<br style="user-select: auto;"></sup></span></p></div><br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Linked List</code>&nbsp;<code>Data Structures</code>&nbsp;