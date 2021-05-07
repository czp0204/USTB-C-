////斜率标准差
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
//



////judge
//var cur_standard = _q[_id].standard();
//var cur_answers = _q[_id].answers;
//var num = Float.effNum(cur_answers);
//cur_standard = Float.effective(num, cur_standard);
//var differ_val = Math.abs(cur_standard - cur_answers);
//if (Float.effNum(cur_answers) == 1 || Float.effNum(cur_answers) == 2) {
//    if (differ_val <= cur_standard * 0.05) {
//        _judge = 0.05;
//    }
//    else  if (differ_val <= cur_standard * 0.1) {
//        _judge = 0.02;
//    }
//    else {
//        _judge = 0.0;
//        _q[_id].cur_einfo = 'calculation';
//    }
//}
//else {
//    if (differ_val < cur_standard * 0.1) {
//        _judge = 0.00;
//        _q[_id].cur_einfo = 'eff';
//    }
//    else {
//        _judge = 0.00;
//        _q[_id].cur_einfo = 'effcal';
//    }
//
//}
////RULE
//<span style = "display:block;float:left;"><b>评分规则:< / b>< / span>
//<span style = "display:block;float:left;margin-bottom:8px;">
//数据偏差在 - 5 % ~5 % 之间，有效数字正确（保留1位或2位有效数字），得0.05分<br / >
//数据偏差在 - 10 % ~10 % 之间，有效数字正确（保留1位或2位有效数字），得0.02分
//< / span>


////驻波法波长不确定度
//var answer1 = _q[_testpaper.qmap.datafill7].answers;
//
//var count_standard = 2 * 2.31 * answer1;
//count_standard = Float.effective(2, count_standard);
//_standard = count_standard;
//
//var answer1 = _q[_testpaper.qmap.datafill1].answers;
//var answer2 = _q[_testpaper.qmap.datafill2].answers;
//var answer3 = _q[_testpaper.qmap.datafill6].answers;
//var answer4 = _q[_testpaper.qmap.datafill8].answers;
//var answer5 = _q[_testpaper.qmap.datafill9].answers;
//var a = Math.pow(1 / (answer1 * 1000), 2) * Math.pow(answer2, 2);
//var b = Math.pow(1000 / answer3, 2);
//var c = Math.pow(answer4 / 1000, 2);
//var count_standard = parseFloat(answer5).toFixed(0) * Math.sqrt(a + b * c);
//count_standard = Float.effective(3, count_standard);
//_standard = Float.ceil(count_standard);

//var answer1 = _q[_testpaper.qmap.datafill9].answers;
//var count_standard = Math.pow(answer1, 2) * 28.9634 / (8.314472 * 291.7 * 1000);
//_standard = Float.decimal(3, count_standard);
//var cur_answer = _q[_map.table2].answers;
//var avl_x, avl_y, m, count_standard;
//var count_all = 0;
//var count_x = 0;
//var count_y = 0;
//var count_x2 = 0;
//m = cur_answer.length;
//for (k = 0; k < m; k++) {
//    count_all += (k + 1) * cur_answer[k];
//    count_x += (k + 1);
//    count_x2 += (k + 1) * (k + 1);
//    count_y += parseFloat(cur_answer[k]);
//}
//avl_x = count_x / m;
//avl_y = count_y / m;
//count_standard = (m * count_all - count_x * count_y) / (m * count_x2 - count_x * count_x);
//_standard = Float.decimal(3, count_standard);
//var answer1 = _q[_testpaper.qmap.datafill15].answers;
//var cur_answers = _q[_testpaper.qmap.table2].answers;
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
//_standard = Float.effective(2, count_standard);

//var answer1 = _q[_testpaper.qmap.datafill1].answers;
//var answer2 = _q[_testpaper.qmap.datafill2].answers;
//var answer3 = _q[_testpaper.qmap.datafill16].answers;
//var answer4 = _q[_testpaper.qmap.datafill18].answers;
//var answer5 = _q[_testpaper.qmap.datafill19].answers;
//var a = Math.pow(1 / (answer1 * 1000), 2) * Math.pow(answer2, 2);
//var b = Math.pow(1000 / answer3, 2);
//var c = Math.pow(answer4 / 1000, 2);
//var count_standard = parseFloat(answer5).toFixed(0) * Math.sqrt(a + b * c);
//_standard = Float.decimal(0, count_standard);.

//var answer1 = _q[_testpaper.qmap.datafill19].answers;
//var count_standard = Math.pow(answer1, 2) * 28.9634 / (8.314472 * 291.7 * 1000);
//_standard = Float.decimal(2, count_standard);1000

//var answer1 = _q[_testpaper.qmap.datafill7].answers;
//
//var count_standard = 2 * 2.31 * answer1;
//count_standard = Float.effective(2, count_standard);
//_standard = count_standard;