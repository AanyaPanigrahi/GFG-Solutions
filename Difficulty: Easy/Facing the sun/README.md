<h2><a href="https://www.geeksforgeeks.org/problems/facing-the-sun2126/1">Facing the sun</a></h2><h3>Difficulty Level : Difficulty: Easy</h3><hr><div class="problems_problem_content__Xm_eO" style="user-select: auto;"><p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Given an array <strong style="user-select: auto;">height</strong> representing the heights of buildings. You have to count the buildings that will see the sunrise (Assume the sun rises on the side of the array starting point).<br style="user-select: auto;"><em style="user-select: auto;">Note:</em> The height of the building should be strictly greater than the height of the buildings left in order to see the sun.</span><br style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><img style="height: 427px; width: 596px; user-select: auto;" src="https://media.geeksforgeeks.org/wp-content/uploads/Building.png" alt=""></span></p>
<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Examples :</strong></span></p>
<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:</strong> height = [7, 4, 8, 2, 9]
<strong style="user-select: auto;">Output:</strong> 3
<strong style="user-select: auto;">Explanation:</strong> As 7 is the first element, it can see the sunrise. 4 can't see the sunrise as 7 is hiding it. 8 can see. 2 can't see the sunrise. 9 also can see<br style="user-select: auto;">the sunrise.
</span></pre>
<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:</strong> height = [2, 3, 4, 5]
<strong style="user-select: auto;">Output:</strong> 4
<strong style="user-select: auto;">Explanation:</strong> As 2 is the first element, it can see the sunrise.  3 can see the sunrise as 2 is not hiding it. Same for 4 and 5, they also can see the sunrise.
</span></pre>
<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Expected Time Complexity:</strong> O(n)<br style="user-select: auto;"><strong style="user-select: auto;">Expected Auxiliary Space:</strong>&nbsp;O(1)</span></p>
<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Constraints:</strong><br style="user-select: auto;">1 ≤ height.size() ≤ 10<sup style="user-select: auto;">6</sup><br style="user-select: auto;">1 ≤ height<sub style="user-select: auto;">i</sub> ≤ 10<sup style="user-select: auto;">8</sup></span></p></div><p><span style=font-size:18px><strong>Company Tags : </strong><br><code>Amazon</code>&nbsp;<br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Arrays</code>&nbsp;<code>Searching</code>&nbsp;<code>Data Structures</code>&nbsp;<code>Algorithms</code>&nbsp;