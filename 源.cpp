//var answer1 = _q[_testpaper.qmap.datafill5].answers;
//var cur_answers = _q[_testpaper.qmap.table1].answers;
//var m = cur_answers.length;
//var count_x = 0;
//var count_y = 0;
//var count_x2 = 0;
//var count_yab = 0;
//var count_xy = 0;
//var avl_x, avl_y, num_a, avl_x2, num_sy;
//for (var k = 0; k < m; k++) {
//    count_xy += cur_answers[k] * (k + 1);
//    count_x += (k + 1);
//    count_y += parseFloat(cur_answers[k]);
//    count_x2 += (k + 1) * (k + 1);
//}
//answer1 = (m * count_xy - count_x * count_y) / (m * count_x2 - count_x * count_x);
//avl_x = count_x / m;
//avl_y = count_y / m;
//avl_x2 = count_x2 / m;
//num_a = (count_y * count_x2 - count_x * count_xy) / (m * count_x2 - Math.pow(count_x, 2));
//for (var k = 0; k < m; k++) {
//    count_yab += Math.pow((parseFloat(cur_answers[k]) - num_a - answer1 * (k + 1)), 2);
//}
//num_sy = Math.sqrt(count_yab / (m - 2));
//var count_standard = num_sy / Math.sqrt((avl_x2 - avl_x * avl_x) * m);
//_standard = Float.effective(1, count_standard);