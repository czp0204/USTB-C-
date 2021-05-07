//Created by CZP 2021.5.6 声速的测量 in C++
// 22.471,31.946,36.318,40.476,45.011,49.218,53.416,57.673,61.772,66.015
//31.5 36 40.691 45 49.492 53.904 58.13 62.668 66.86 71.335 

#include <iostream>

int main()
{
    double b_zhubo = 4.43;
    //置换数字即可 行波法计算代码相同 30.425,35.336,40.211,45.232,49.591,54.215,57.456,61.792,66.613,70.762
    double X1[10] = { 31.5, 36,40.691,45, 49.492, 53.904, 58.13, 62.668, 66.86, 71.335 };
    double m = 10;
    double count_x = 0;
    double count_y = 0;
    double count_x2 = 0;
    double count_xy = 0;
    double count_yab = 0;
    double avl_x, avl_y, num_a, avl_x2, num_sy;

    for (size_t k = 0; k < m; k++)
    {
        count_xy += X1[k] * (k + 1);
        count_x += (k + 1);
  /*      std::cout << "count_x = " << count_x << std::endl;
        std::cout << "X[K] = " << X1[k] << std::endl;*/
        count_y += X1[k];
        count_x2 += pow((k + 1), 2);
    }
    double answer1 = (m * count_xy - count_x * count_y) / (m * count_x2 - count_x * count_x);
    avl_x = count_x / m;
    avl_y = count_y / m;
    avl_x2 = count_x2 / m;
    num_a = (count_y * count_x2 - count_x * count_xy) / (m * count_x2 - pow(count_x, 2));
    for (size_t k = 0; k < m; k++)
    {
        count_yab += pow((X1[k] - num_a - answer1 * (k + 1)), 2);
    }
    num_sy = sqrt(count_yab / (m - 2));
    double  count_standard = num_sy / sqrt((avl_x2 - avl_x * avl_x) * m);
    std::cout << "直线斜率标准差 = " << count_standard << std::endl;
    //驻波法波长不确定度：
    double answer11 = count_standard;

    double count_standard111 = 2 * 2.31 * answer11;
    std::cout <<"驻波法波长不确定度"<< count_standard111 << std::endl;

 
    //替换自己的数字
    double Answer1 = 40.325;
    double Answer2 = 2;
    double Answer3 = 2 * b_zhubo;
    double Answer4 = answer11;
    double Answer5 = 40.325 * Answer3;
    std::cout << "shengsu" << Answer5 << std::endl;

    

    double a = pow(1 / (Answer1 * 1000), 2) * pow(Answer2, 2);
    double b = pow(1000 / Answer3, 2);
    double c = pow(Answer4 / 1000, 2);
    double count_standardd= Answer5 * sqrt(a + b * c);

    std::cout << " 声速不确定度 =" << count_standardd<< std::endl;
    //空气比热容：“
    double answer111 = Answer5;
    double count_standarddd = pow(answer111, 2) * 28.9634 / (8.314472 * 291.7 * 1000);
    std::cout << "空气比热容伽马" << count_standarddd <<std::endl;

    //double X2[10] = { 22.471,31.946,36.318,40.476,45.011,49.218,53.416,57.673,61.772,66.015 };
    //double avl_x1, avl_y1, count_standard1111;
    //double count_all = 0;
    //double count_x = 0;
    //double count_y = 0;
    //double count_x2 = 0;
    //double m = 10;
    //for (size_t k = 0; k < 10; k++) {
    //    count_all += (k + 1) * X2[k];
    //    count_x += (k + 1);
    //    count_x2 += (k + 1) * (k + 1);
    //    count_y += X2[k];
    //}
    //avl_x1 = count_x / m;
    //avl_y1 = count_y / m;
    //count_standard1111 = (m * count_all - count_x * count_y) / (m * count_x2 - count_x * count_x);
    //
    //std::cout << "行波直线斜率等于" << count_standard1111 << std::endl;

    system("pause");
}



