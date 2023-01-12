//          
//          Apparently wrong code
// 
// 
//  #include <iostream>
// using namespace std;
// int main()
// {
//     int T;
//     cin >> T;
//     while (T--)
//     {
//         int X, Y, K, N, P, C, count = 0;
//         cin >> X >> Y >> K >> N;
//         int req = X - Y;
//         while (N--)
//         {
//             cin >> P >> C;
//             if (P >= req && K >= C)
//             {
//                 count++;
//             }
//         }
//         if (count == 0)
//         {
//             cout << "UnluckyChef" << endl;
//         }
//         else
//         {
//             cout << "LuckyChef" << endl;
//         }
//     }

//     return 0;
// }
//
// 
//                      Apparently right code
//
// #include <iostream>
// using namespace std;
// int main()
// {
//     int T;
//     cin >> T;
//     while (T--)
//     {
//         int X, Y, K, N, P, C, count = 0;
//         cin >> X >> Y >> K >> N;
//         int req = X - Y;
//         while (N--)
//         {
//             cin >> P >> C;
//             if (P >= req && K >= C)
//             {
//                 cout << "LuckyChef" << endl;
//                 count++;
//                 break;
//             }
//         }
//         if (count == 0)
//         {
//             cout << "UnluckyChef" << endl;
//         }
//     }

//     return 0;
// }