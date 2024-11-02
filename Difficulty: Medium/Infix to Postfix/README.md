<h2><a href="https://www.geeksforgeeks.org/problems/infix-to-postfix-1587115620/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=infix-to-postfix">Infix to Postfix</a></h2><h3>Difficulty Level : Difficulty: Medium</h3><hr><div class="problems_problem_content__Xm_eO" style="user-select: auto;"><p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Given an infix expression in the form of string <strong style="user-select: auto;">str</strong>. Convert this infix expression to postfix expression.</span></p>
<ul style="user-select: auto;">
<li style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Infix expression:</strong> The expression of the form a <strong style="user-select: auto;">op</strong> b. When an operator is in-between every pair of operands.</span></li>
<li style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Postfix expression:</strong> The expression of the form a b <strong style="user-select: auto;">op</strong>. When an operator is followed for every pair of operands.</span><br style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Note:</strong> The order of precedence is: ^ <strong style="user-select: auto;">greater than</strong>&nbsp;* <strong style="user-select: auto;">equals to</strong> / <strong style="user-select: auto;">greater than</strong> + <strong style="user-select: auto;">equals to</strong> -. Ignore the right associativity of <strong style="user-select: auto;">^</strong>.</span></li>
</ul>
<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></span></p>
<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input</strong>: str = "a+b*(c^d-e)^(f+g*h)-i"
<strong style="user-select: auto;">Output</strong>: abcd^e-fgh*+^*+i-
<strong style="user-select: auto;">Explanation</strong>:
After converting the infix expression 
into postfix expression, the resultant 
expression will be&nbsp;abcd^e-fgh*+^*+i-
</span></pre>
<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></span></p>
<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input</strong>: str = "A*(B+C)/D"
<strong style="user-select: auto;">Output</strong>: ABC+*D/
<strong style="user-select: auto;">Explanation</strong>:
After converting the infix expression 
into postfix expression, the resultant 
expression will be&nbsp;ABC+*D/
</span>&nbsp;</pre>
<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Your Task:</strong><br style="user-select: auto;">This is a <strong style="user-select: auto;">function </strong>problem. You only need to complete the function<strong style="user-select: auto;"> infixToPostfix()&nbsp;</strong>that takes a&nbsp;<strong style="user-select: auto;">string</strong>(Infix Expression) as a&nbsp;<strong style="user-select: auto;">parameter</strong> and <strong style="user-select: auto;">returns </strong>a <strong style="user-select: auto;">string(</strong>postfix expression<strong style="user-select: auto;">)</strong>. The <strong style="user-select: auto;">printing </strong>is done <strong style="user-select: auto;">automatically </strong>by the <strong style="user-select: auto;">driver code</strong>.</span></p>
<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Expected Time Complexity:&nbsp;</strong>O(|str|).<br style="user-select: auto;"><strong style="user-select: auto;">Expected Auxiliary Space:&nbsp;</strong>O(|str|).</span></p>
<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Constraints:</strong><br style="user-select: auto;">1 ≤ |str| ≤ 10<sup style="user-select: auto;">5</sup></span></p></div><p><span style=font-size:18px><strong>Company Tags : </strong><br><code>Paytm</code>&nbsp;<code>VMWare</code>&nbsp;<code>Microsoft</code>&nbsp;<br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Stack</code>&nbsp;<code>Data Structures</code>&nbsp;