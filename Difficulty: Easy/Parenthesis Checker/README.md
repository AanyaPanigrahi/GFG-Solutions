<h2><a href="https://www.geeksforgeeks.org/problems/parenthesis-checker2744/1">Parenthesis Checker</a></h2><h3>Difficulty Level : Difficulty: Easy</h3><hr><div class="problems_problem_content__Xm_eO" style="user-select: auto;"><p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Given an expression string <strong style="user-select: auto;">x</strong>. Examine whether the pairs and the orders of {,},(,),[,] are correct in exp.<br style="user-select: auto;">For example, the function should return 'true' for exp = [()]{}{[()()]()} and 'false' for exp = [(]).</span></p>
<p style="user-select: auto;"><strong style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Note: </span></strong><span style="font-size: 18px; user-select: auto;">The <strong style="user-select: auto;">driver code</strong> prints "balanced" if function return true, otherwise it prints "not balanced".</span></p>
<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Examples :</strong></span></p>
<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input</strong>: {([])}
<strong style="user-select: auto;">Output</strong>: true
<strong style="user-select: auto;">Explanation</strong>: <span style="color: rgb(255, 0, 0); user-select: auto;">{</span> <span style="color: rgb(0, 255, 0); user-select: auto;">(</span> <span style="color: rgb(0, 0, 205); user-select: auto;">[</span> <span style="color: rgb(0, 0, 205); user-select: auto;">]</span> <span style="color: rgb(0, 255, 0); user-select: auto;">)</span> <span style="color: rgb(255, 0, 0); user-select: auto;">}.&nbsp;</span>Same colored brackets can form balanced pairs, with 0 number of unbalanced bracket.
</span></pre>
<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input</strong>: ()
<strong style="user-select: auto;">Output</strong>: true
<strong style="user-select: auto;">Explanation</strong>: <span style="color: rgb(0, 255, 0); user-select: auto;">()</span><span style="color: rgb(0, 0, 0); user-select: auto;">. </span>Same bracket can form balanced pairs,and here only 1 type of bracket is present and in balanced way.</span>
</pre>
<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input</strong>: ([]
<strong style="user-select: auto;">Output</strong>: false
<strong style="user-select: auto;">Explanation</strong>: <span style="color: rgb(0, 255, 0); user-select: auto;">(</span><span style="color: rgb(0, 0, 205); user-select: auto;">[]</span>.<span style="color: rgb(0, 0, 0); user-select: auto;"> </span>Here square bracket is balanced but the small bracket is not balanced and Hence , the output will be unbalanced.</span></pre>
<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Expected Time Complexity</strong>: O(|x|)<br style="user-select: auto;"><strong style="user-select: auto;">Expected Auixilliary Space</strong>: O(|x|)</span><br style="user-select: auto;"><br style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Constraints:</strong><br style="user-select: auto;">1 ≤ |x| ≤ 10<sup style="user-select: auto;">5</sup></span></p>
<p style="user-select: auto;">&nbsp;</p></div><p><span style=font-size:18px><strong>Company Tags : </strong><br><code>Flipkart</code>&nbsp;<code>Amazon</code>&nbsp;<code>Microsoft</code>&nbsp;<code>OYO Rooms</code>&nbsp;<code>Snapdeal</code>&nbsp;<code>Oracle</code>&nbsp;<code>Walmart</code>&nbsp;<code>Adobe</code>&nbsp;<code>Google</code>&nbsp;<code>Yatra.com</code>&nbsp;<br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Strings</code>&nbsp;<code>Stack</code>&nbsp;<code>STL</code>&nbsp;<code>Data Structures</code>&nbsp;