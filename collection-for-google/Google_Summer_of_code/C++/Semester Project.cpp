#include <iostream>
#include<string>
#include<iomanip>
#include<stdlib.h>
using namespace std;

int k1=20,k2=20,k3=20,k4=20,k5=20,k6=20,k7=20,k8=20,k9=20,k10=20,k11=20,k12=20,k13=20,kt1=20;

string c1[40] = { "Ahmed Khan", "Ahmed Khan", "Ahmed Khan", "Raza Ahmed", "Amjad Ali", "Noor Mohammd", "Ali Khan", "Masroor Khan", "Zaheer Rizwi", "Taqi Ahmed", "Ishrat Khan", "Ali Rizwi", "Ibad Siddiqui", "Azfar Raza ", "Abdul Moin", "Rauf Sattar ", "Hamza Zubari", "M. Khalid", "Ali Mirza", "Abid Sheikh" };
string c2[40] = { "Ahmed Waseem", "Ahmed Waseem", "Ahmed Waseem", "Waseem Raza ", "Amjad Aisha", "Noor Bisma", "Ali Sohail", "Khan Shahmeer", "Zehra Bisma ", "Bisma Fatima", "Neha Ishrat", "Baqar Ali", "Faheem Subhani", "Raza anwar", "Sadia Jabbar", "Fizza Sattar ", "Zubar Ansari", "Aisha Shah", "Dua Murtaza", "Zulqarnain Sheikh" };
string c3[40] = { "Waseem Qadri", "Waseem Mukhtar", "Ahmed Ansari", "Raza Abbas ", "Amjad Mirza", "Noor Fatima", "Ali Nawaz", "Khan Shahbaz Ali", "Shahbaz Khan", "Bisma Tahir", "Neha Ahmed", "Ali Tauqeer", "Subhan Rizvi", "Raza Haider", "Sadia Mansoor", "Abdul Sattar ", "Ansar Malik", "Aishba Shaheen", "Shahzaib Khan", "Zulqarnain Sheikh" };
string c4[40] = { "Ahmed Waseem", "Ahmed Waseem", "Ahmed Waseem", "Waseem Raza ", "Amjad Aisha", "Noor Fatima", "Ali Nawaz", "Khan Shahbaz Ali", "Shahbaz Khan", "Bisma Tahir", "Neha Ahmed", "Ali Tauqeer", "Subhan Rizvi", "Raza Haider", "Sadia Mansoor", "Abdul Sattar ", "Ansar Malik", "Aishba Shaheen", "Shahzaib Khan", "Zulqarnain Sheikh" };
string c5[40] = { "Noor Bisma", "Ali Sohail", "Khan Shahmeer", "Zehra Mirza", "Bisma Fatima", "Neha Ishrat", "Baqar Ali", "Faheem Subhani", "Raza anwar", "Sadia Jabbar", "Fizza Sattar ", "Zubar Ansari", "Aisha Shah", "Dua Murtaza", "Zulqarnain Sheikh", "Ahmed Waseem", "Ahmed Waseem", "Ahmed Waseem", "Waseem Raza ", "Amjad Aisha" };
string c6[40] = { "Sohaib Ali","Wareesha Khan", "Ahmed Qazi", "Mashrib Alam", "Mehmood Mumtaz", "Muzammil Shehzad", "Sidra Noor", "Sidra Amjad", "Wariha Arif", "Neha Ahmed", "Rabia Ayub", "Ramsha Anwar", "Tajwar Ahmed", "Waqar Ali", "Muzzamil Naeem", "Mavra Ahmed", "Khushbakht Khan", "Zeshan Khan", "Sohail Tariq", "Hassan Qazi" };
string c7[40] = { "Alisha Ahmed", "Aliyan Ali", "Ahmed Ali", "Zeshan Anwar", "Munazza Ahmed", "Mumtaz Ahmed", "Sahir Ali Khan", "Sharukh Akhter", "Rizwan Raheem", "Umeer Idrees", "Umer Khan", "Uzair Ahmed", "Nabeel Shehzad", "Sabahat Zaidi", "Manzoor Ali", "Mohsin Khan", "Zeshan Mohiudin", "Danyal Tahir", "Danyal Mursaleen", "Noor Shahnawaz" };
string c8[40] = { "Bilal Amanat", "Zubair Waheed", "Jaree Raza", "Abdul Basit", "Umam Khan", "Arsalan Ahmed", "Muzzamil Siddqui", "Ammar Khan", "Sobia Siddiqui", "Sumaira Siddiqui", "Ahsan Khan", "Junaid Khan", "Nabeel Ahmed", "Faizan Khan", "Tauseef Khan", "Mohammd Tariq", "Tauseef Tahir", "Danish Jawaid", "Anus Akhter", "Bilal Mehmood", };
string c9[40] = { "Waseem Qadri", "Waseem Mukhtar", "Ahmed Ansari", "Raza Abbas ", "Amjad Mirza", "Noor Fatima", "Ali Nawaz", "Khan Shahbaz Ali", "Shahbaz Khan", "Bisma Tahir", "Neha Ahmed", "Ali Tauqeer", "Subhan Rizvi", "Raza Haider", "Sadia Mansoor", "Abdul Sattar ", "Ansar Malik", "Aishba Shaheen", "Shahzaib Khan", "Zulqarnain Sheikh" };
string c10[40] = { "Shoaib Noor", "Mohammad Shoaib", "Shoaib Khan", "Shoaib Mansoor", "Shoaib Humza", "Shoaib Raza", "Shoaib Ali", "Shoaib Humza", "Shoaib Munawar", "Shoaib Waheed", "Shoaib Meraj", "Shoaib Ahmed", "Shoaib Noman", "Shoaib Salman", "Shoaib Minhas", "Shoaib Qasim", "Shoaib Murtaza", "Shoaib Shabbir", "Shoaib zaheer", "Shoaib Imran" };
string c11[40] = { "Ahmed Waseem", "Ahmed Waseem", "Ahmed Waseem", "Waseem Raza ", "Aisha Amjad", "Noor Fatima", "Ali Nawaz", "Khan Shahbaz Ali", "Shahbaz Khan", "Bisma Tahir", "Fizza Sattar ", "Zubar Ansari", "Aisha Shah", "Dua Murtaza", "Zulqarnain Sheikh", "Ahmed Waseem", "Ahmed Waseem", "Ahmed Waseem", "Waseem Raza ", "Amjad Aisha" };
string c12[40] = { "Fizza Sattar ", "Zubar Ansari", "Aisha Shah", "Dua Murtaza", "Zulqarnain Sheikh", "Ahmed Waseem", "Ahmed Waseem", "Ahmed Waseem", "Waseem Raza ", "Amjad Aisha""Bilal Amanat", "Zubair Waheed", "Jaree Raza", "Abdul Basit", "Umam Khan", "Arsalan Ahmed", "Muzzamil Siddqui", "Ammar Khan", "Sobia Siddiqui", "Sumaira Siddiqui","Umair Siddiqui" };
string c13[40] = { "Nawaz Shareef", "Asif Zardari", "Pervaiz Musharaf", "Abid Sher", "Imran Khan", "Shah Mehmood", "Faisal Wada", "Farooq Sattar", "Faisal Sabzwari", "Bilawal Zardari", "Shahi Syed", "Asfand Yar wali", "Ikram Sheikh", "Iftikhar Chawdary", "Faroog Naseem", "Chawdary Nisar", "Rehman Malik", "Tahir ul Qadri", "khursheed Shah","Bashir Bilor" };

string d1[40] = { "Waseem Ahmed", "Naeem Ahmed", "Kaleem Ahmed", "Saeed Raza", "Majid amjad", "Bilal Noor", "Sohail Ali", "Shahmeer Khan", "Zeheer Zehra", "Rizwan Faheem", "Shafi Ishrat", "Baqar rizwi", "Faheem Siddiqui", "Anwar raza ", "Gosia Moin", "Fizza Sattar ", "Faiza Zubari", "A. Khalid", "Daniyal Mirza", "Zulqarnain Sheikh" };
string d2[40] = { "Waseem Khan", "Waseem Khan", "Waseem Khan", "Raza Abbas", "M.Amjad ", "Noor Khan", "M. Ali ", "Khan Shaheer", "Zeheer Naqvi ", "Fasal Mehmood", "Ishrat Hussain", "Baqar Rizvi", "Subhan Gulzar", "M. Anwar", "A. Jabbar", "Abdul Sattar ", "Ali Ansari", "Waris Shah", "Ali Murtaza", "Sharik Sheikh" };
string d3[40] = { "Waseem Qadri", "Waseem Mukhtar", "Ahmed Ansari", "Raza Abbas ", "Amjad Mirza", "Noor Faisal", "Ali Nawaz", "Khan Shahbaz Ali", "Shahbaz Khan", "S.M. Tahir", "Nehaal Ahmed", "Ali Tauqeer", "Subhan Rizvi", "Raza Haider", "Sadia Mansoor", "Abdul Sattar ", "Ansar Malik", "Ali Shaheen", "Shahzaib Khan", "Zulqarnain Sheikh" };
string d4[40] = { "Waseem Qazi", "Waseem Akhter", "Waseem Jameel", "Raza Bukhari", "Amjad Sultan", "Zeshan Khan", "Rab Nawaz", "Khan Shahnawaz", "Arbaz Khan", "M. Tahir", "Ahmed Ansari", "M. Tauqeer", "Yaseen Rizvi", "M. Haider", "Shoaib Mansoor", "Abdul Ghaffar ", "Malik Shah", "M. Shaheen", "Sahir Khan", "Sheikh Iqbal" };
string d5[40] = { "Noor Mohammad", "Sohail Khan", "Khan Shahzaib", "Zeheer Bilal ", "Naveed Gulzar", "Ishrat Khan", "Syed Ali", "Subhan Zubair", "Anwar Raza", "Abdul Akhbar", "Navaid Sattar ", "Javaid Ansari", "Baqar Shah", "Murtaza Subhani", "Shoaib Sheikh", "Waseem Qureshi", "Waseem Akhber", "Waseem Furqan", "Fazzal Raza ", "Noman Khan" };
string d6[40] = { "Furqan Ali","M. Khan", "M. Qazi", "M. Alam", "M. Mumtaz", "M. Shehzad", "M. Noor", "M. Amjad", "M. Arif", "M. Ahmed", "M. Ayub", "M. Anwar", "M. Ahmed", "M. Ali", "M. Naeem", "M. Ahmed", "M. Khanzada", "Furqan Khan", "M. Tariq", "M. Qazi" };
string d7[40] = { "Zakir Ahmed", "Rizwan Ali", "Ali Nawaz", "Anwar Kamal", "Ahmed Khan", "Syed Ahmed", "Wasil Ali Khan", "Farrukh Akhter", "M. Raheem", "M. Idrees", "Shabbir Khan", "Mumtaz Ahmed", "Shehzad Anwar", "Manzoor Zaidi", "Owais Ali", "Ehsan Khan", "Gulaam Mohiudin", "Ashfaq Tahir", "Faraz Mursaleen", "Rabnawaz" };
string d8[40] = { "M. Amanat", "M. Waheed", "M. Raza", "Abdul Hamid", "Faheem Khan", "M. Ahmed", "Shoaib Siddqui", "M. Khan", "M. Siddiqui", "M. Siddiqui", "Mohsin Khan", "Jawaid Khan", "Aqeel Ahmed", "Furqan Khan", "Muneer Khan", "Mohammd Faiz", "M. Tahir", "M. Jawaid", "M. Akhter", "M. Mehmood", };
string d9[40] = { "Waseem Haqani", "Mukhtar Ahmed", "Zubair Ansari", "Murtaza Abbas ", "Hashir Mirza", "Asif Khan ", "Ali Muraad", "Khan Shamshad Ali", "Shiraz Khan", "M. Tahir", "Saleem Ahmed", "M. Tauqeer", "Hassan Rizvi", "M. Haider", "Kamaal Mansoor", "Abdul Basit ", "Anwar Malik", "Ali Shaheen", "Shahmeer Khan", "Farhan Sheikh" };
string d10[40] = { "Noor Muhammad", "Mohammad Shahzaib", "Sagheer Khan", "Saqib Mansoor", "Humza Ali", "Ali Raza", "Owais Ali", "Navaid Humza", "Munawar Shiekh", "Zubair Waheed", "Meraj Khalid", "Ahmed Ansari", "Faisal Noman", "Shabbir Salman", "Rashid Minhas", "M. Qasim", "Syed Murtaza", "Shabbir Shah", "Zaheer Akhter", "Imran Aslam" };
string d11[40] = { "M. Waseem", "Abdul Ahad", "Ahmed Waseem", "M. Raza ", "M. Amjad ", "Ali Hasan", "M. Nawaz", "Khan Shahzaib Ali", "Arbaz Khan", "M. Tahir", "M. Sattar ", "Unaid Ansari", "Faisal Shah", "M. Murtaza", "Zubair Sheikh", "M. Waseem", "Minhaj Waseem", "Wasil Gulnaz", "Mohsin Raza", "M. Majid" };
string d12[40] = { "Abdul Qaiyyum ", "Sabir Ansari", "Sabir Shah", "Murtaza Mairaj", "Saqib Sheikh", "Waseem Akram", "Ahmed saleem", "Ahmed Kaleem", "Ahmed Raza ", "Ammar Khan", "Mukhtar Shah", "Abdul Waheed", "Tariq Raza", "Abdul Samad", "Umer Khan", "Syed Ahmed", "Saim Siddqui", "Arbaz Khan", "Sufiyan Siddiqui", "Sumair Siddiqui" };
string d13[40] = { "M. Shareef", "M. Zardari", "M. Musharaf", "M. Ali", "M. Khan", "Shah Nawaz", "Naseem Wada", "Faheem Sattar", "Ahsan Sabzwari", "Asif Zardari", "Shahid Syed", "Meer Yar wali", "Aslam Sheikh", "Asghar Chawdary", "M. Naseem", "Chawdary Ansar", "Raheem Malik", "M. Qadri", "M. Shah" ,"Hanif Bilor"};

string ad1[40] = { "Bin-Qasim Street H # 100", "Bin-Qasim Street H # 101", "Bin-Qasim Street H # 102", "Bin-Qasim Street H # 103", "Bin-Qasim Street H # 104", "Bin-Qasim Street H # 105", "Bin-Qasim Street H # 106", "Bin-Qasim Street H # 107", "Bin-Qasim Street H # 108", "Bin-Qasim Street H # 109", "Bin-Qasim Street H # 110", "Bin-Qasim Street H # 111", "Bin-Qasim Street H # 112", "Bin-Qasim Street H # 113", "Bin-Qasim Street H # 114", "Bin-Qasim Street H # 115", "Bin-Qasim Street H # 116", "Bin-Qasim Street H # 117", "Bin-Qasim Street H # 118", "Bin-Qasim Street H # 119" };
string ad2[40] = { "Sohail-Gazi Street H # 100", "Sohail-Gazi Street H # 101", "Sohail-Gazi Street H # 102", "Sohail-Gazi Street H # 103", "Sohail-Gazi Street H # 104", "Sohail-Gazi Street H # 105", "Sohail-Gazi Street H # 106", "Sohail-Gazi Street H # 107", "Sohail-Gazi Street H # 108", "Sohail-Gazi Street H # 109", "Sohail-Gazi Sohail-Gazi H # 110", "Sohail-Gazi Street H # 111", "Sohail-Gazi Street H # 112", "Sohail-Gazi Street H # 113", "Sohail-Gazi Street H # 114", "Sohail-Gazi Street H # 115", "Sohail-Gazi Street H # 116", "Sohail-Gazi Street H # 117", "Sohail-Gazi Street H # 118", "Sohail-Gazi Street H # 119" };
string ad3[40] = { "Sakhi Hassan Street H # 100", "Sakhi Hassan Street H # 101", "Sakhi Hassan Street H # 102", "Sakhi Hassan Street H # 103", "Sakhi Hassan Street H # 104", "Sakhi Hassan Street H # 105", "Sakhi Hassan Street H # 106", "Sakhi Hassan Street H # 107", "Sakhi Hassan Street H # 108", "Sakhi Hassan Street H # 109", "Sakhi Hassan Street H # 110", "Sakhi Hassan Street H # 111", "Sakhi Hassan Street H # 112", "Sakhi Hassan Street H # 113", "Sakhi Hassan Street H # 114", "Sakhi Hassan Street H # 115", "Sakhi Hassan Street H # 116", "Sakhi Hassan Street H # 117", "Sakhi Hassan Street H # 118", "Sakhi Hassan Street H # 119" };
string ad4[40] = { "Tariq Street H # 100", "Tariq Street H # 101", "Tariq Street H # 102", "Tariq Street H # 103", "Tariq Street H # 104", "Tariq Street H # 105", "Tariq Street H # 106", "Tariq Street H # 107", "Tariq Street H # 108", "Tariq Street H # 109", "Tariq Street H # 110", "Tariq Street H # 111", "Tariq Street H # 112", "Tariq Street H # 113", "Tariq Street H # 114", "Tariq Street H # 115", "Tariq Street H # 116", "Tariq Street H # 117", "Tariq Street H # 118", "Tariq Street H # 119" };
string ad5[40] = { "Khalid Bin Waleed Street H # 100", "Khalid Bin Waleed Street H # 101", "Khalid Bin Waleed Street H # 102", "Khalid Bin Waleed Street H # 103", "Khalid Bin Waleed Street H # 104", "Khalid Bin Waleed Street H # 105", "Khalid Bin Waleed Street H # 106", "Khalid Bin Waleed Street H # 107", "Khalid Bin Waleed H # 108", "Khalid Bin Waleed Street H # 109", "Khalid Bin Waleed H # 110", "Khalid Bin Waleed H # 111", "Khalid Bin Waleed Street H # 112", "Khalid Bin Waleed Street H # 113", "Khalid Bin Waleed Street H # 114", "Khalid Bin Waleed Street H # 115", "Khalid Bin Waleed Street H # 116", "Khalid Bin Waleed Street H # 117", "Khalid Bin Waleed Street H # 118", "Khalid Bin Waleed Street H # 119" };
string ad6[40] = { "Hyderi Street H # 100", "Hyderi Street H # 101", "Hyderi Street H # 102", "Hyderi Street H # 103", "Hyderi Street H # 104", "Hyderi Street H # 105", "Hyderi Street H # 106", "Hyderi Street H # 107", "Hyderi Street H # 108", "Hyderi Street H # 109", "Hyderi Street H # 110", "Hyderi Street H # 111", "Hyderi Street H # 112", "Hyderi Street H # 113", "Hyderi Street H # 114", "Hyderi Street H # 115", "Hyderi Street H # 116", "Hyderi Street H # 117", "Hyderi Street H # 118", "Hyderi Street H # 119" };
string ad7[40] = { "Nazimabad Street H # 100", "Nazimabad Street H # 101", "Nazimabad Street H # 102", "Nazimabad Street H # 103", "Nazimabad Street H # 104", "Nazimabad Street H # 105", "Nazimabad Street H # 106", "Nazimabad Street H # 107", "Nazimabad Street H # 108", "Nazimabad Street H # 109", "Nazimabad Street H # 110", "Nazimabad Street H # 111", "Nazimabad Street H # 112", "Nazimabad Street H # 113", "Nazimabad Street H # 114", "Nazimabad Street H # 115", "Nazimabad Street H # 116", "Nazimabad Street H # 117", "Nazimabad Street H # 118", "Nazimabad Street H # 119" };
string ad8[40] = { "Karimabad Street H # 100", "Karimabad Street H # 101", "Karimabad Street H # 102", "Karimabad Street H # 103", "Karimabad Street H # 104", "Karimabad Street H # 105", "Karimabad Street H # 106", "Karimabad Street H # 107", "Karimabad Street H # 108", "Karimabad Street H # 109", "Karimabad Street H # 110", "Karimabad Street H # 111", "Karimabad Street H # 112", "Karimabad Street H # 113", "Karimabad Street H # 114", "Karimabad Street H # 115", "Karimabad Street H # 116", "Karimabad Street H # 117", "Karimabad Street H # 118", "Karimabad Street H # 119" };
string ad9[40] = { "N.Nazimabad Street H # 100", "N.Nazimabad Street H # 101", "N.Nazimabad Street H # 102", "N.Nazimabad Street H # 103", "N.Nazimabad Street H # 104", "N.Nazimabad Street H # 105", "N.Nazimabad Street H # 106", "N.Nazimabad Street H # 107", "Nazimabad Street H # 108", "N.Nazimabad Street H # 109", "N.Nazimabad Street H # 110", "Nazimabad Street H # 111", "N.Nazimabad Street H # 112", "Nazimabad Street H # 113", "N.Nazimabad Street H # 114", "N.Nazimabad Street H # 115", "N.Nazimabad Street H # 116", "N.Nazimabad Street H # 117", "N.Nazimabad Street H # 118", "N.Nazimabad Street H # 119" };
string ad10[40] = { "Hussaina Bad Street H # 100", "Hussaina Bad Street H # 101", "Hussaina Bad Street H # 102", "Hussaina Bad Street H # 103", "Hussaina Bad Street H # 104", "Hussaina Bad Street H # 105", "Hussaina Bad Street H # 106", "Hussaina Bad Street H # 107", "Hussaina Bad Street H # 108", "Hussaina Bad Street H # 109", "Hussaina Bad Street H # 110", "Hussaina Bad Street H # 111", "Hussaina Bad Street H # 112", "Hussaina Bad Street H # 113", "Hussaina Bad Street H # 114", "Hussaina Bad Street H # 115", "Hussaina Bad Street H # 116", "Hussaina Bad Street H # 117", "Hussaina Bad Street H # 118", "Hussaina Bad Street H # 119" };
string ad11[40] = { "Defence Street H # 100", "Defence Street H # 101", "Defence Street H # 102", "Defence Street H # 103", "Defence Street H # 104", "Defence Street H # 105", "Defence Street H # 106", "Defence Street H # 107", "Defence Street H # 108", "Defence Street H # 109", "Defence Street H # 110", "Defence Street H # 111", "Defence Street H # 112", "Defence Street H # 113", "Defence Street H # 114", "Defence Street H # 115", "Defence Street H # 116", "Defence Street H # 117", "Defence Street H # 118", "Defence Street H # 119" };
string ad12[40] = { "Cant Street H # 100", "Cant Street H # 101", "Cant Street H # 102", "Cant Street H # 103", "Cant Street H # 104", "Cant Street H # 105", "Cant Street H # 106", "Cant Street H # 107", "Cant Street H # 108", "Cant Street H # 109", "Cant Street H # 110", "Cant Street H # 111", "Cant Street H # 112", "Cant Street H # 113", "Cant Street H # 114", "Cant Street H # 115", "Cant Street H # 116", "Cant Street H # 117", "Cant Street H # 118", "Cant Street H # 119" };
string ad13[40] = { "Gulshan Street H # 100", "Gulshan Street H # 101", "Gulshan Street H # 102", "Gulshan Street H # 103", "Gulshan Street H # 104", "Gulshan Street H # 105", "Gulshan Street H # 106", "Gulshan Street H # 107", "Gulshan Street H # 108", "Gulshan Street H # 109", "Gulshan Street H # 110", "Gulshan Street H # 111", "Gulshan Street H # 112", "Gulshan Street H # 113", "Gulshan Street H # 114", "Gulshan Street H # 115", "Gulshan Street H # 116", "Gulshan Street H # 117", "Gulshan Street H # 118", "Gulshan Street H # 119" };


string nums1[40] = { "7644722", "7644731", "7644741", "7644751", "7644761", "7644771", "7644781","7644791", "7644710", "7644711", "7644722", "7644723", "7644741", "7644751", "7644726", "7644727", "7644728","7644791", "7644201", "7644751" };
string nums2[40] = { "8644722", "8644731", "8644741", "8644751", "8644761", "8644771","8644781","8644791", "8644710", "8644711", "8644722","8644723","8644741","8644751","8644726","8644727", "8644728", "8644791", "8644201","8644751" };
string nums3[40] = { "9644722", "9644731", "9644741", "9644751", "9644761", "9644771","9644781","9644791", "9644710","9644711", "9644722","9644723", "9644741", "9644751", "9644726", "9644727","9644728","9644791","9644201","9644751" };
string nums4[40] = { "1044722", "1044731", "1044741", "1044751", "1044761", "1044771", "1044781", "1044791", "1044710", "1044711","1044722","1044723", "1044741", "1044751", "1044726", "1044727", "1044728","1044791","1044201", "1044751"};
string nums5[40] = { "1144722", "1144731", "1144741", "1144751", "1144761", "1144771", "1144781", "1144791", "1144710", "1144711", "1144722","1144723","1144741", "1144751", "1144726","1144727","1144728","1144791","1144201", "1144751" };
string nums6[40] = { "1244722", "1244731", "1244741", "1244751", "1244761", "1244771", "1244781", "1144791", "1244710", "1244711", "1244722", "1244723", "1244741", "1244751", "1244726", "1244727", "1244728","1244791","1244201","1244751"};
string nums7[40] = { "1344722", "1344731", "1344741", "1344751", "1344761", "1344771", "1344781","1244791","1344710", "1344711","1344722","1344723","1344741", "1344751", "1344726","1344727", "1344728", "1344791","1344201","1344751"};
string nums8[40] = { "1444722", "1444731", "1444741","1444751","1444761","1444771","1444781","1344791","1444710","1444711","1444722","1444723","1444741","1444751","1444726","1444727","1444728","1444791","1444201","1444751" };
string nums9[40] = { "1544722", "1544731","1544741", "1544751","1544761","1544771","1544781","1444791","1544710","1544711","1544722","1544723","1544741","1544751","1544726","1544727","1544728","1544791","1544201","1544751" };
string nums10[40] = { "16447022","1644731","1644741", "1644751", "1644761", "1644771", "1644781", "1544791","1644710","1644711","1644722","1644723","1644741","1644751","1644726","1644727","1644728","1644791","1644201","1644751"};
string nums11[40] = { "17440722","1744731","1744741", "1744751", "1744761", "1744771","1744781", "164791", "1744710","1744711","1744722","1744723","1744741","1744751","1744726","1744727","1744728","1744791","1744201", "1744751" };
string nums12[40] = { "18404722","1844731","1844741","1844751","1844761","1844771","1844781","1744791","1844710", "1844711", "1844722", "1844723", "1844741","1844751","1844726","1844727","1844728","1844791","1844201", "1844751" };
string nums13[40] = { "19044722","1944731","1944741", "1944751", "1944761", "1944771", "1944781","1844791", "1944710","1944711","1944722","1944723", "1944741","1944751","1944726","1944727","1944728", "1944791", "1944201", "1944751" };
char f=22;
string t[40] = { "Sir shamim" ,"Sir Saqib", "Sir basit", "Sir Zulqarnain", "Sir Shahab Uddin", "Sir Salman", "Yusra Sami", "Adnan Zafar", "Ayesha Ikram", "Nazia Riyasat", "Miss Muffarah", "Mehwish Zaidi", "Taha Bin Hassan", "Miss Shiren", "Sara Raza", "Sir Zeshan", "Sir Qasim", "Sir Hassan", "Sir Imran", "Sir Adnan" };
string numt[40] = { "6644722","6644731","6644741","6644751","6644761","6644771","6644781", "6644791", "6644710","6644711","6644722","6644723","6644741", "6644751","6644726","6644727","6644728","6644791","6644201","6644751"};
string design[40] = { "Visting Faculity", "HOD", "Visting Faculity", "HOD", "Pemenent Faculity", "Visiting Faculity", "Visting Faculity", "HOD", "Visting Faculity", "HOD", "Visting Faculity", "HOD", "Visting Faculity", "HOD", "Pemenent Faculity", "Visiting Faculity", "Visting Faculity", "HOD", "Visting Faculity", "HOD" };
string adt[40] = { "Johar Street H # 100", "Johar Street H # 101", "Johar Street H # 102", "Johar Street H # 103", "Johar Street H # 104", "Johar Street H # 105", "Johar Street H # 106", "Johar Street H # 107", "Johar Street H # 108", "Johar Street H # 109", "Johar Street H # 110", "Johar Street H # 111", "Johar Street H # 112", "Johar Street H # 113", "Johar Street H # 114", "Johar Street H # 115", "Johar Street H # 116", "Johar Street H # 117", "Johar Street H # 118", "Johar Street H # 119" };
void fee(string);
void detailt();
void details(string);
void add(string);
void course(string);
void policya();
void policyb();
void policyc();
void policyd();
void alerta(string);
void transfer(string);
void sports(string);
void teacher();
main()
{
	int c,d;
	char e = 2,dd=254,a;
	string x,b,v,w,y,m,zz,xx,yy,vv,qq,ii,pp;
	cout << e << " Welcome to ABC Academy Management system " << e << endl; 
	cout<<"  ========================================"<<endl<<endl;
	cout << "For Detail about Student press 's'" << endl;
	cout << "For Details about Teacher press 't'" << endl;
	cout << "To Print Fee vaucher press 'f' \n";
	cout << "For course Details press 'c'\n";
	cout << "To Add new student press 'n'" << endl;
	cout << "For viewing of school policies and admission criteria press 'v'" << endl;
	cout << "For alert notice press 'a'" << endl;
	cout << "For certificate Issuance press 'i'"  << endl;
	cout << "For addition of new teacher press 'h'" << endl;
	cout << "For authority Letters press 'l'" << endl;
	cout << "To exit the application press 'q'"<<endl;
	cin >> a;

	switch (a)
	{
	case 's':
		cout << "Enter the Of the student (Please type in lower case e.g class 1 ,nursery,kg 1)" << endl;
		cin.ignore();
		getline(cin,x);
		details(x);
		cout<<"\n\nIf you want to start the application again type (start)\nIf want want to quit the application type (quit)\nDont use upper case (capital Letter) ";
		cin>>m;
		if(m=="start")
		{
		system("cls");
		main();
		}
		else if(m=="quit")
		{
		break;
		}
		break;
		case 't':
		detailt();
		cout<<"\n\nIf you want to start the application again type (start)\nIf want want to quit the application type (quit)\nDont use upper case (capital Letter) ";
		cin>>m;
		if(m=="start")
		{
		system("cls");
		main();
		}
		else if(m=="quit")
		{
		break;
		}
		break;
		
		case 'f':
		cout << "Enter the class of student (Please type in lower case e.g class 1 ,nursery,kg 1)\n";
		cin.ignore();
		getline(cin,v);
		details(v);
		fee(v);
		cout<<"\n\nIf you want to start the application again type (start)\nIf want want to quit the application type (quit)\nDont use upper case (capital Letter) ";
		cin>>m;
		if(m=="start")
		{
		system("cls");
		main();
		}
		else if(m=="quit")
		{
		break;
		}
		break;		
		case 'c':
		cout<<"Enter the class(Please type in lower case e.g nursery, class 1, kg 1)\n"; 
		cin.ignore();
		getline(cin,x);
		course(x);
		cout<<"\n\nIf you want to start the application again type (start)\nIf want want to quit the application type (quit)\nDont use upper case (capital Letter) ";
		cin>>m;
		if(m=="start")
		{
			system("cls");
			main();
		}
		else if(m=="quit")
		{
		break;
		}
		break;
		case 'n':
		cout<<"Enter the class In which you want to add the student type in this format\n(class 1, nursery, kg 1)\n";	
		cin.ignore();
		getline(cin,w);
		add(w);
		system("cls");
		cout<<"Student Successfully added You can view it from detail section\n\n";
		main();
		break;
		case 'v':
		cout<<"\nFor policy about student type student";
		cout<<"\nFor policy about staff type staff";
		cout<<"\nFor social media policy type social";
		cout<<"\nFor policy about addmission type addmission\n";
		cin>>w;
		if(w=="student")
		{
		policyb();
			
		}
		else if(w=="staff")
		{
		policyd();
		cout<<"\n\nIf you want to start the application again type (start)\nIf want want to quit the application type (quit)\nDont use upper case (capital Letter) ";
		cin>>m;
		if(m=="start")
		{
		system("cls");
		main();
		}
		else if(m=="quit")
		{
		break;
	}
		break;	
		}
		else if(w=="social")
		{
		system("cls");
		policyc();
		cout<<"\n\nIf you want to start the application again type (start)\nIf want want to quit the application type (quit)\nDont use upper case (capital Letter) ";
		cin>>m;
		if(m=="start")
		{
		main();
		}
		else if(m=="quit")
		{
		break;
	}
		break;
		}
		else if(w=="addmission")
		{
			
		policya();
		cout<<"\n\nIf you want to start the application again type (start)\nIf want want to quit the application type (quit)\nDont use upper case (capital Letter) ";
		cin>>m;
		if(m=="start")
		{
		system("pause");	
		system("cls");
		main();
		}
		else if(m=="quit")
		{
		break;
	}
		break;
		}
		else
		cout<<"Wrong input";
		cout<<"\n\nIf you want to start the application again type (start)\nIf want want to quit the application type (quit)\nDont use upper case (capital Letter) ";
		cin>>m;
		if(m=="start")
		{
		system("pause");
		system("cls");
		main();
		}
		else if(m=="quit")
		{
		break;
	}
		break;
		case 'a':
		cout<<"For Unpaid Fee notice type fee \n";
		cout<<"For vicational notice type vicational\n";
		cin>>y;
		if(y=="fee")
		{
		cout<<"Enter the class of student type in this format (class 1, nursery, kg 1)\n";
		cin.ignore();
		getline(cin,w);
		system("cls");
		details(w);
		cout<<endl;
		alerta(w);
		cout<<"\n\nIf you want to start the application again type (start)\nIf want want to quit the application type (quit)\nDont use upper case (capital Letter) ";
		cin>>m;
		if(m=="start")
		{
			system("pause");
			system("cls");
			main();
			}
			else if(m=="quit")
			{
			break;
			}
			break;
				
			}
			else if(y=="vicational")
			{
				
			string aa,bb,cc;
			char e=30,d=17,j=16,g=31;
			cout<<"Enter Date of vication ( Must be in this format 24-08-1995)"<<endl;
			cin>>aa;
			cout<<"Enter Reason for vication "<<endl;
			cin.ignore();
			getline(cin,bb);
			system("cls");
			cout<<setw(6);
			for(int i=1;i<=60;i++)
			{
			cout<<e;
			}
			
		cout<<endl<<setw(5)<<d<<setw(45)<<" A B C   A C A D E M Y "<<setw(16)<<j<<endl; 
		cout<<setw(5)<<d;
		for(int q=1;q<=60;q++)
		{
				
		cout<<f;
		}
		cout<<j;
			cout<<endl<<setw(5)<<d<<" The close will remain close on "<<setw(21)<<aa<<setw(8)<<j<<endl;
			cout<<setw(5)<<d<<" Due to "<<setw(45)<<bb<<setw(8)<<j<<endl;
			cout<<setw(5)<<d<<" For more information please contact on 0900-78601"<<setw(11)<<j<<endl;
			cout<<setw(5)<<d<<setw(35)<<"Thank you!"<<setw(26)<<j<<endl;
			cout<<setw(6);
				for(int i=1;i<=60;i++)
				{
					cout<<g;
				}
				
			cout<<"\n\nIf you want to start the application again type (start)\nIf want want to quit the application type (quit)\nDont use upper case (capital Letter) ";
			cin>>m;
			if(m=="start")
			{
			system("pause");
			system("cls");
			main();
			}
			else if(m=="quit")
			{
			break;
			}
			break;	
				
			}
		else
		{
		cout<<"Wrong input \n";
		cout<<"\n\nIf you want to start the application again type (start)\nIf want want to quit the application type (quit)\nDont use upper case (capital Letter) ";
		cin>>m;
		if(m=="start")
		{
			system("pause");
			system("cls");
			main();
		}
		else if(m=="quit")
		{
		break;
		}
		break;
		}
		case 'i':
		cout<<"For transfer certificate type transfer "<<endl;
		cout<<"For sports certificate type sports "<<endl;
		cout<<"For experience certificate type experience"<<endl;
		cin>>y;
		if(y=="transfer")
		{
		cout<<"Enter the class of student please type in lower case (nursery, kg 1, class 1)"<<endl;
		cin.ignore();
		getline(cin,w);
		details(w);
		transfer(w);
		cout<<"\n\nIf you want to start the application again type (start)\nIf want want to quit the application type (quit)\nDont use upper case (capital Letter) ";
		cin>>m;
		if(m=="start")
		{
		system("pause");
		system("cls");
		main();
		}
		else if(m=="quit")
		{
		break;
		}
			
		}
		else if(y=="sports")
		
		{
		cout<<"Enter the class of student please type in lower case (nursery, kg 1, class 1)"<<endl;
		cin.ignore();
		getline(cin,w);
		details(w);
		sports(w);
		cout<<"\n\nIf you want to start the application again type (start)\nIf want want to quit the application type (quit)\nDont use upper case (capital Letter) ";
		cin>>m;
		if(m=="start")
		{
		system("pause");	
		system("cls");
		main();
		}
		else if(m=="quit")
		{
		break;
		}
		break;
		}
			
		
		else if(y=="experience")
		{
		detailt();	
		teacher();
		cout<<"\n\nIf you want to start the application again type (start)\nIf want want to quit the application type (quit)\nDont use upper case (capital Letter) ";
		cin>>m;
		if(m=="start")
		{
		system("pause");	
		system("cls");
		main();
		}
		else if(m=="quit")
		{
		break;
	}
		break;
	}
	else
	{
		cout<<"\n\nIf you want to start the application again type (start)\nIf want want to quit the application type (quit)\nDont use upper case (capital Letter) ";
		cin>>m;
		if(m=="start")
		{
		system("cls");
		main();
		}
		else if(m=="quit")
		{
		break;
		}
	}
		break;
		case 'h':
		cout<<"Enter the name of teacher"<<endl;
		cin.ignore();
		getline(cin,t[kt1]);
		cout<<"Enter the designation of teacher please type like this (-HOD)"<<endl;
		cin.ignore();
		getline(cin,design[kt1]);
		cout<<"Enter telephone number of teacher"<<endl;
		cin.ignore();
		getline(cin,numt[kt1]);
		cout<<"Enter residential address of teacher please type in this format(-Street 6)"<<endl;
		cin.ignore();
		getline(cin,adt[kt1]);
		kt1++;
		system("cls");
		cout<<"Teacher successfully added now you can view it from detail section\n";
		main();
		break;
		
		case 'l':
		
		cout<<"Type the name of authorized person (max 20 characters)\n(Please use a single - before input (-Umer Iqbal))"<<endl;
		cin.ignore();
		getline(cin,zz);
		cout<<"Type the designation of authorized person (max 17 characters)\n(Please use a single - before input (-Administrator))"<<endl;
		cin.ignore();
		getline(cin,xx);
		cout<<"Type the name of the person who is taking the authority(max 20 characters)\n(please Use a -single - before input (-Shoaib Noor))"<<endl;
		cin.ignore();
		getline(cin,yy);
		cout<<"Type the CNIC of the person who is taking the authority (must be of 14 digits)\n(Please use a single - before input(-4210010111 ))"<<endl;
		cin.ignore();
		getline(cin,ii);
		cout<<"Type the designation of person who is taking the authority(max 17 characters)\n(Please use a single - before input(-Manager))"<<endl;
		cin.ignore();
		getline(cin,vv);
		cout<<"Type the purpose for which the auth is given(max 50 charcters)\n(Please use a single - before input (-To collect cheque))"<<endl;
		cin.ignore();
		getline(cin,qq);
		cout<<"Type the current date must be like this(24-08-1995)"<<endl;
		cin.ignore();
		getline(cin,pp);
		system("cls");	
		cout<<setw(5);
		for(int q=1;q<=67;q++)
		{
				
		cout<<"=";
		}
		cout<<endl<<setw(5)<<dd<<setw(45)<<" A B C   A C A D E M Y "<<setw(21)<<dd<<endl; 
		cout<<setw(5)<<dd;
		for(int q=1;q<=65;q++)
		{
				
		cout<<f;
		}
		cout<<dd;
		cout<<endl<<setw(5)<<dd<<"  Iam "<<setw(20)<<zz<<" I am the "<<setw(17)<<xx<<" of ABC "<<setw(5)<<dd<<endl;
		cout<<setw(5)<<dd<<"  academy I authorized "<<setw(20)<<yy<<" who is designated as "<<dd<<endl;
		cout<<setw(5)<<dd<<"  a "<<setw(17)<<vv<<" having CNIC "<<setw(14)<<ii<<setw(18)<<dd<<endl;
		cout<<setw(5)<<dd<<"  to "<<setw(50)<<qq<<setw(11)<<dd<<endl;
		cout<<setw(5)<<dd<<"  Signature of Authorized person______________"<<setw(20)<<dd<<endl;
		cout<<setw(5)<<dd<<"   "<<setw(49)<<" Date:"<<setw(11)<<pp<<setw(3)<<dd<<endl;
		cout<<setw(5)<<dd<<"  Signature of Authorized taker______________"<<setw(21)<<dd<<endl;
		cout<<setw(5);
		for(int q=1;q<=67;q++)
			{
				
		cout<<"=";
			}
		cout<<"\n\nIf you want to start the application again type (start)\nIf want want to quit the application type (quit)\nDont use upper case (capital Letter) ";
		cin>>m;
		if(m=="start")
		{
		system("pause");	
		system("cls");
		main();
		}
		else if(m=="quit")
		{
		break;
		}
		break;
		
		
		case 'q':
		cout<<"\nThankyou for using the application hope you like it ";
		break;
	    default: 
		cout<<"\nYou have choose an incorrect character please choose again\n"<<endl;
		system("pause");
		system("cls");
		main();
		break;
				
}
}


void details(string v)
{
	int q;

	system("cls");
	if (v=="nursery")
	{
		
		for (int i = 0; i < k1; i++)
		{
			cout <<"\nRoll No. "<<i+1<< "Name: " << c1[i] << "   Father Name: " << d1[i] << "   Phone Number " << nums1[i] << "   Residential Address " << ad1[i]<<endl;
		}
}
	else if (v=="kg 1")
	{
		for (int i = 0; i < k2; i++)
		{
			cout << "\nRoll No. " << i + 1 << "\tName: " << c2[i] << "   Father Name: " << d2[i] << "   Phone Number " << nums2[i] << "   Residential Address " << ad2[i] << endl;
		}
	}

	else if (v=="kg 2")
{

	for (int i = 0; i < k3; i++)
	{
		cout <<"\nRoll No. "<<i+1<< "Name: " << c3[i] << "   Father Name: " << d3[i] << "   Phone Number " << nums3[i] << "   Residential Address " << ad3[i]<<endl;
	}
}
	else if (v=="class 1")
	{
		for (int i = 0; i < k4; i++)
		{
			cout <<"\nRoll No. "<<i+1 <<"   Name: " << c4[i] << "   Father Name: " << d4[i] << "   Phone Number " << nums4[i] << "   Residential Address " << ad4[i]<<endl;
		}

}
	else if (v =="class 2")
	{
		for (int i = 0; i < k5; i++)
		{
			cout <<"\nRoll No. "<<i+1<< "   Name: " << c5[i] << "   Father Name: " << d5[i] << "   Phone Number " << nums5[i] << "   Residential Address " << ad5[i]<<endl;
		}
}
	else if (v=="class 3")
	{
		for (int i = 0; i < k6; i++)
		{
			cout <<"\nRoll No. "<<i+1<< "   Name: " << c6[i] << "Father Name: " << d6[i] << "   Phone Number " << nums6[i] << "   Residential Address " << ad6[i]<<endl;
		}
}

	else if (v=="class 4")
	{
		for (int i = 0; i < k7; i++)
		{
			cout <<"\nRoll No. "<<i+1<<"   Name: " << c7[i] << "   Father Name: " << d7[i] << "   Phone Number " << nums7[i] << "   Residential Address " << ad7[i]<<endl;
		}
}
	else if (v=="class 5")
	{
		for (int i = 0; i < k8; i++)
		{
			cout <<"\nRoll No. "<<i+1<<"  Name: " << c8[i] << "   Father Name: " << d8[i] << "   Phone Number " << nums8[i] << "   Residential Address " << ad8[i]<<endl;
		}
}

	else if (v=="class 6")
	{
		for (int i = 0; i < k9; i++)
		{
			cout <<"\nRoll No. "<<i+1<< "   Name: " << c9[i] << "   Father Name: " << d9[i] << "   Phone Number " << nums9[i] << "   Residential Address " << ad9[i]<<endl;
}
		}

	else if (v=="class 7")
	{
		for (int i = 0; i < k10; i++)
		{
			cout <<"\nRoll No. "<<i+1<< "   Name: " << c10[i] << "   Father Name: " << d10[i] << "   Phone Number " << nums10[i] << "   Residential Address " << ad10[i]<<endl;
		}
}
	else if (v=="class 8")
	{
		for (int i = 0; i < k11; i++)
		{
			cout <<"\nRoll No."<<i+1<< "   Name: " << c11[i] << "   Father Name: " << d11[i] << "Phone Number " << nums11[i] << "\nResidential Address " << ad11[i]<<endl;
		}
}
	else if (v=="class 9")
	{
		for (int i = 0; i < k12; i++)
		{
			cout <<"\nRoll No."<<i+1<< "   Name: " << c12[i] << "   Father Name: " << d12[i] << "   Phone Number " << nums12[i] << "   Residential Address " << ad12[i]<<endl;
		}

}
	else if (v=="class 10")
	{
		for (int i = 0; i < k13; i++)
		{
			cout <<"\nRoll No. "<<i+1<< "   Name: " << c13[i] << "   Father Name: " << d13[i] << "   Phone Number " << nums13[i] << "   Residential Address " << ad13[i]<<endl;
		}
	}

	
	}
void detailt()
{
	system("cls");
	for(int i=0;i<kt1;i++)
	{
		cout<<"\nTeacher code "<<i+1<<" Teacher` Name "<<t[i]<<"  Phone Number "<<numt[i]<<"  Designation "<<design[i]<<"\nResidential Address "<<adt[i]<<endl;
	}
}

void fee(string v)

{	{
	char e=178,d=22;
	int bb,cc,aa;
	string mm;

	
	if (v=="nursery")
	{
		
		cout<<"Enter the Roll Number of student\n";
		cin>>bb;
		system("cls");
		cout<<"Enter Month\n";
		cin>>mm;
		cout<<"Enter The amount paid (in Figure e.g 5000)\n";
		cin>>aa;
		
		cc=bb-1;
		for(int j=0;j<k1;j++)
		
	{
			
		
		if(j==cc)
		{
			cout<<setw(5);
			for(int q=1;q<=67;q++)
			{
				
				cout<<"*";
			}
			cout<<endl<<setw(5)<<"*"<<setw(45)<<" A B C   A C A D E M Y "<<setw(21)<<"*"<<endl; 
			cout<<setw(5)<<"*";
			for(int q=1;q<=65;q++)
			{
				
			cout<<f;
			}
			cout<<"*";
			cout<<endl<<setw(5)<<"*"<<"  Name:"<<setw(19)<<c1[j]<<"   Father`s Name:"<<setw(20)<<d1[j]<<setw(3)<<"*"<<endl; 
			cout<<setw(5)<<"*"<<"  Amount paid ="<<setw(9)<<aa<<setw(42)<<"*"<<endl;
			cout<<setw(5)<<"*"<<"  Signature of accountant______________"<<setw(27)<<"*"<<endl;
		
			cout<<setw(5);
			for(int q=1;q<=67;q++)
			{
				
				cout<<"*";
			}
		}
		
	}
}


	else if (v=="kg 1")
	{
		
		cout<<"Enter the Roll Number of student\n";
		cin>>bb;
		system("cls");
		cout<<"Enter Month\n";
		cin>>mm;
		cout<<"Enter The amount paid (in Figure e.g 5000)\n";
		cin>>aa;
		
		cc=bb-1;
		for(int j=0;j<k2;j++)
		
	{
			
		
		if(j==cc)
		{
			cout<<setw(5);
			for(int q=1;q<=67;q++)
			{
				
				cout<<"*";
			}
			cout<<endl<<setw(5)<<"*"<<setw(45)<<" A B C   A C A D E M Y "<<setw(21)<<"*"<<endl; 
			cout<<setw(5)<<"*";
			for(int q=1;q<=65;q++)
			{
				
			cout<<f;
			}
			cout<<"*";
			
			cout<<endl<<setw(5)<<"*"<<"  Name:"<<setw(19)<<c2[j]<<"   Father`s Name:"<<setw(20)<<d2[j]<<setw(3)<<"*"<<endl; 
			cout<<setw(5)<<"*"<<"  Amount paid ="<<setw(9)<<aa<<setw(42)<<"*"<<endl;
			cout<<setw(5)<<"*"<<"  Signature of accountant______________"<<setw(27)<<"*"<<endl;
		
			cout<<setw(5);
			for(int q=1;q<=67;q++)
			{
				
				cout<<"*";
			}
		}
		
	}
}

	else if (v=="kg 2")
{
		
		cout<<"Enter the Roll Number of student\n";
		cin>>bb;
		system("cls");
		cout<<"Enter Month\n";
		cin>>mm;
		cout<<"Enter The amount paid (in Figure e.g 5000)\n";
		cin>>aa;
		
		cc=bb-1;
		for(int j=0;j<k3;j++)
		
	{
			
		
		if(j==cc)
		{
			cout<<setw(5);
			for(int q=1;q<=67;q++)
			{
				
				cout<<"*";
			}
			cout<<endl<<setw(5)<<"*"<<setw(45)<<" A B C   A C A D E M Y "<<setw(21)<<"*"<<endl; 
			cout<<setw(5)<<"*";
			for(int q=1;q<=65;q++)
			{
				
			cout<<f;
			}
			cout<<"*";
			
			cout<<endl<<setw(5)<<"*"<<"  Name:"<<setw(19)<<c3[j]<<"   Father`s Name:"<<setw(20)<<d3[j]<<setw(3)<<"*"<<endl; 
			cout<<setw(5)<<"*"<<"  Amount paid ="<<setw(9)<<aa<<setw(42)<<"*"<<endl;
			cout<<setw(5)<<"*"<<"  Signature of accountant______________"<<setw(27)<<"*"<<endl;
		
			cout<<setw(5);
			for(int q=1;q<=67;q++)
			{
				
				cout<<"*";
			}
		}
		
	}
}

	else if (v=="class 1")
	{
		
		cout<<"Enter the Roll Number of student\n";
		cin>>bb;
		system("cls");
		cout<<"Enter Month\n";
		cin>>mm;
		cout<<"Enter The amount paid (in Figure e.g 5000)\n";
		cin>>aa;
		
		cc=bb-1;
		for(int j=0;j<k4;j++)
		
	{
			
		
		if(j==cc)
		{
			cout<<setw(5);
			for(int q=1;q<=67;q++)
			{
				
				cout<<"*";
			}
			cout<<endl<<setw(5)<<"*"<<setw(45)<<" A B C   A C A D E M Y "<<setw(21)<<"*"<<endl; 
			cout<<setw(5)<<"*";
			for(int q=1;q<=65;q++)
			{
				
			cout<<f;
			}
			cout<<"*";
			
			cout<<endl<<setw(5)<<"*"<<"  Name:"<<setw(19)<<c4[j]<<"   Father`s Name:"<<setw(20)<<d4[j]<<setw(3)<<"*"<<endl; 
			cout<<setw(5)<<"*"<<"  Amount paid ="<<setw(9)<<aa<<setw(42)<<"*"<<endl;
			cout<<setw(5)<<"*"<<"  Signature of accountant______________"<<setw(27)<<"*"<<endl;
		
			cout<<setw(5);
			for(int q=1;q<=67;q++)
			{
				
				cout<<"*";
			}
		}
		
	}
}

		else if (v=="class 2")
		{
		
		cout<<"Enter the Roll Number of student\n";
		cin>>bb;
		system("cls");
		cout<<"Enter Month\n";
		cin>>mm;
		cout<<"Enter The amount paid (in Figure e.g 5000)\n";
		cin>>aa;
		
		cc=bb-1;
		for(int j=0;j<k5;j++)
		
	{
			
		
		if(j==cc)
		{
			cout<<setw(5);
			for(int q=1;q<=67;q++)
			{
				
				cout<<"*";
			}
			cout<<endl<<setw(5)<<"*"<<setw(45)<<" A B C   A C A D E M Y "<<setw(21)<<"*"<<endl; 
			cout<<setw(5)<<"*";
			for(int q=1;q<=65;q++)
			{
				
			cout<<f;
			}
			cout<<"*";
			
			cout<<endl<<setw(5)<<"*"<<"  Name:"<<setw(19)<<c5[j]<<"   Father`s Name:"<<setw(20)<<d5[j]<<setw(3)<<"*"<<endl; 
			cout<<setw(5)<<"*"<<"  Amount paid ="<<setw(9)<<aa<<setw(42)<<"*"<<endl;
			cout<<setw(5)<<"*"<<"  Signature of accountant______________"<<setw(27)<<"*"<<endl;
		
			cout<<setw(5);
			for(int q=1;q<=67;q++)
			{
				
				cout<<"*";
			}
		}
		
	}
}

else if (v=="class 3")
		{
		
		cout<<"Enter the Roll Number of student\n";
		cin>>bb;
		system("cls");
		cout<<"Enter Month\n";
		cin>>mm;
		cout<<"Enter The amount paid (in Figure e.g 5000)\n";
		cin>>aa;
		
		cc=bb-1;
		for(int j=0;j<k6;j++)
		
	{
			
		
		if(j==cc)
		{
			cout<<setw(5);
			for(int q=1;q<=67;q++)
			{
				
				cout<<"*";
			}
			cout<<endl<<setw(5)<<"*"<<setw(45)<<" A B C   A C A D E M Y "<<setw(21)<<"*"<<endl; 
			cout<<setw(5)<<"*";
			for(int q=1;q<=65;q++)
			{
				
			cout<<f;
			}
			cout<<"*";	
			cout<<endl<<setw(5)<<"*"<<"  Name:"<<setw(19)<<c6[j]<<"   Father`s Name:"<<setw(20)<<d6[j]<<setw(3)<<"*"<<endl; 
			cout<<setw(5)<<"*"<<"  Amount paid ="<<setw(9)<<aa<<setw(42)<<"*"<<endl;
			cout<<setw(5)<<"*"<<"  Signature of accountant______________"<<setw(27)<<"*"<<endl;
		
			cout<<setw(5);
			for(int q=1;q<=67;q++)
			{
				
				cout<<"*";
			}
		}
		
	}
}


		else if (v=="class 4")
	{
		
		cout<<"Enter the Roll Number of student\n";
		cin>>bb;
		system("cls");
		cout<<"Enter Month\n";
		cin>>mm;
		cout<<"Enter The amount paid (in Figure e.g 5000)\n";
		cin>>aa;
		
		cc=bb-1;
		for(int j=0;j<k7;j++)
		
	{
			
		
		if(j==cc)
		{
			cout<<setw(5);
			for(int q=1;q<=67;q++)
			{
				
				cout<<"*";
			}
			cout<<endl<<setw(5)<<"*"<<setw(45)<<" A B C   A C A D E M Y "<<setw(21)<<"*"<<endl; 
			cout<<setw(5)<<"*";
			for(int q=1;q<=65;q++)
			{
				
			cout<<f;
			}
			cout<<"*";
			
			cout<<endl<<setw(5)<<"*"<<"  Name:"<<setw(19)<<c7[j]<<"   Father`s Name:"<<setw(20)<<d7[j]<<setw(3)<<"*"<<endl; 
			cout<<setw(5)<<"*"<<"  Amount paid ="<<setw(9)<<aa<<setw(42)<<"*"<<endl;
			cout<<setw(5)<<"*"<<"  Signature of accountant______________"<<setw(27)<<"*"<<endl;
		
			cout<<setw(5);
			for(int q=1;q<=67;q++)
			{
				
				cout<<"*";
			}
		}
		
	}
}

	
		else if (v=="class 5")
	{
		
		cout<<"Enter the Roll Number of student\n";
		cin>>bb;
		system("cls");
		cout<<"Enter Month\n";
		cin>>mm;
		cout<<"Enter The amount paid (in Figure e.g 5000)\n";
		cin>>aa;
		
		cc=bb-1;
		for(int j=0;j<k8;j++)
		
	{
			
		
		if(j==cc)
		{
			cout<<setw(5);
			for(int q=1;q<=67;q++)
			{
				
				cout<<"*";
			}
			cout<<endl<<setw(5)<<"*"<<setw(45)<<" A B C   A C A D E M Y "<<setw(21)<<"*"<<endl; 
			cout<<setw(5)<<"*";
			for(int q=1;q<=65;q++)
			{
				
			cout<<f;
			}
			cout<<"*";		
			cout<<endl<<setw(5)<<"*"<<"  Name:"<<setw(19)<<c8[j]<<"   Father`s Name:"<<setw(20)<<d8[j]<<setw(3)<<"*"<<endl; 
			cout<<setw(5)<<"*"<<"  Amount paid ="<<setw(9)<<aa<<setw(42)<<"*"<<endl;
			cout<<setw(5)<<"*"<<"  Signature of accountant______________"<<setw(27)<<"*"<<endl;
		
			cout<<setw(5);
			for(int q=1;q<=67;q++)
			{
				
				cout<<"*";
			}
		}
		
	}
}

		else if (v=="class 6")
{
		
		cout<<"Enter the Roll Number of student\n";
		cin>>bb;
		system("cls");
		cout<<"Enter Month\n";
		cin>>mm;
		cout<<"Enter The amount paid (in Figure e.g 5000)\n";
		cin>>aa;
		
		cc=bb-1;
		for(int j=0;j<k9;j++)
		
	{
			
		
		if(j==cc)
		{
			cout<<setw(5);
			for(int q=1;q<=67;q++)
			{
				
				cout<<"*";
			}
			cout<<endl<<setw(5)<<"*"<<setw(45)<<" A B C   A C A D E M Y "<<setw(21)<<"*"<<endl; 
			cout<<setw(5)<<"*";
			for(int q=1;q<=65;q++)
			{
				
			cout<<f;
			}
			cout<<"*";
			cout<<endl<<setw(5)<<"*"<<"  Name:"<<setw(19)<<c9[j]<<"   Father`s Name:"<<setw(20)<<d9[j]<<setw(3)<<"*"<<endl; 
			cout<<setw(5)<<"*"<<"  Amount paid ="<<setw(9)<<aa<<setw(42)<<"*"<<endl;
			cout<<setw(5)<<"*"<<"  Signature of accountant______________"<<setw(27)<<"*"<<endl;
		
			cout<<setw(5);
			for(int q=1;q<=67;q++)
			{
				
				cout<<"*";
			}
		}
		
	}
}

		else if (v=="class 7")
	{
		
		cout<<"Enter the Roll Number of student\n";
		cin>>bb;
		system("cls");
		cout<<"Enter Month\n";
		cin>>mm;
		cout<<"Enter The amount paid (in Figure e.g 5000)\n";
		cin>>aa;
		
		cc=bb-1;
		for(int j=0;j<k10;j++)
		
	{
			
		
		if(j==cc)
		{
			cout<<setw(5);
			for(int q=1;q<=67;q++)
			{
				
				cout<<"*";
			}
			cout<<endl<<setw(5)<<"*"<<setw(45)<<" A B C   A C A D E M Y "<<setw(21)<<"*"<<endl; 
			cout<<setw(5)<<"*";
			for(int q=1;q<=65;q++)
			{
				
			cout<<f;
			}
			cout<<"*";
			
			cout<<endl<<setw(5)<<"*"<<"  Name:"<<setw(19)<<c10[j]<<"   Father`s Name:"<<setw(20)<<d10[j]<<setw(3)<<"*"<<endl; 
			cout<<setw(5)<<"*"<<"  Amount paid ="<<setw(9)<<aa<<setw(42)<<"*"<<endl;
			cout<<setw(5)<<"*"<<"  Signature of accountant______________"<<setw(27)<<"*"<<endl;
		
			cout<<setw(5);
			for(int q=1;q<=67;q++)
			{
				
				cout<<"*";
			}
		}
		
	}
}

		else if (v=="class 8")
	{
		
		cout<<"Enter the Roll Number of student\n";
		cin>>bb;
		system("cls");
		cout<<"Enter Month\n";
		cin>>mm;
		cout<<"Enter The amount paid (in Figure e.g 5000)\n";
		cin>>aa;
		
		cc=bb-1;
		for(int j=0;j<k11;j++)
		
	{
			
		
		if(j==cc)
		{
			cout<<setw(5);
			for(int q=1;q<=67;q++)
			{
				
				cout<<"*";
			}
			cout<<endl<<setw(5)<<"*"<<setw(45)<<" A B C   A C A D E M Y "<<setw(21)<<"*"<<endl; 
			cout<<setw(5)<<"*";
			for(int q=1;q<=65;q++)
			{
				
			cout<<f;
			}
			cout<<"*";
			
			cout<<endl<<setw(5)<<"*"<<"  Name:"<<setw(19)<<c11[j]<<"   Father`s Name:"<<setw(20)<<d11[j]<<setw(3)<<"*"<<endl; 
			cout<<setw(5)<<"*"<<"  Amount paid ="<<setw(9)<<aa<<setw(42)<<"*"<<endl;
			cout<<setw(5)<<"*"<<"  Signature of accountant______________"<<setw(27)<<"*"<<endl;
		
			cout<<setw(5);
			for(int q=1;q<=67;q++)
			{
				
				cout<<"*";
			}
		}
		
	}
}

		else if (v=="class 9")
	{
		
		cout<<"Enter the Roll Number of student\n";
		cin>>bb;
		system("cls");
		cout<<"Enter Month\n";
		cin>>mm;
		cout<<"Enter The amount paid (in Figure e.g 5000)\n";
		cin>>aa;
		
		cc=bb-1;
		for(int j=0;j<k12;j++)
		
	{
			
		
		if(j==cc)
		{
			cout<<setw(5);
			for(int q=1;q<=67;q++)
			{
				
				cout<<"*";
			}
			cout<<endl<<setw(5)<<"*"<<setw(45)<<" A B C   A C A D E M Y "<<setw(21)<<"*"<<endl; 
			cout<<setw(5)<<"*";
			for(int q=1;q<=65;q++)
			{
				
			cout<<f;
			}
			cout<<"*";
			
			cout<<endl<<setw(5)<<"*"<<"  Name:"<<setw(19)<<c12[j]<<"   Father`s Name:"<<setw(20)<<d12[j]<<setw(3)<<"*"<<endl; 
			cout<<setw(5)<<"*"<<"  Amount paid ="<<setw(9)<<aa<<setw(42)<<"*"<<endl;
			cout<<setw(5)<<"*"<<"  Signature of accountant______________"<<setw(27)<<"*"<<endl;
		
			cout<<setw(5);
			for(int q=1;q<=67;q++)
			{
				
				cout<<"*";
			}
		}
		
	}
}

	else if (v=="class 10")
{
		
		cout<<"Enter the Roll Number of student\n";
		cin>>bb;
		system("cls");
		cout<<"Enter Month\n";
		cin>>mm;
		cout<<"Enter The amount paid (in Figure e.g 5000)\n";
		cin>>aa;
		
		cc=bb-1;
		for(int j=0;j<k13;j++)
		
	{
			
		
		if(j==cc)
		{
		cout<<setw(5);
		for(int q=1;q<=67;q++)
			{
				
		cout<<"*";
			}
			cout<<endl<<setw(5)<<"*"<<setw(45)<<" A B C   A C A D E M Y "<<setw(21)<<"*"<<endl; 
			cout<<setw(5)<<"*";
			for(int q=1;q<=65;q++)
			{
				
			cout<<f;
			}
			cout<<"*";
			
			cout<<endl<<setw(5)<<"*"<<"  Name:"<<setw(19)<<c13[j]<<"   Father`s Name:"<<setw(20)<<d13[j]<<setw(3)<<"*"<<endl; 
			cout<<setw(5)<<"*"<<"  Amount paid ="<<setw(9)<<aa<<setw(42)<<"*"<<endl;
			cout<<setw(5)<<"*"<<"  Signature of accountant______________"<<setw(27)<<"*"<<endl;
		
			cout<<setw(5);
			for(int q=1;q<=67;q++)
			{
				
				cout<<"*";
			}
		}
		
	}
}
		else
		{
		
		cout<<"You have chose an invalid class please choose again"<<endl;
		system("pause");
		system("cls");
		main();
	}
}
}
	
	void course(string v)
{
	char e=177;
	system("cls");
	if(v=="nursery")
	{
		cout<<setw(11);
		for(int l=1;l<60;l++)
		{
		
		cout<<e;
		
		}
		cout<<endl<<setw(11)<<e<<setw(45)<<" A B C   A C A D E M Y "<<setw(13)<<e<<endl; 
		cout<<setw(11)<<e;
		for(int q=1;q<=57;q++)
		{
				
		cout<<f;
		}
		cout<<e;
		
		cout<<"\n"<<setw(11)<<e<<setw(3)<<"S#"<<setw(15)<<" NAME OF BOOK "<<setw(18)<<"PUBLISHER"<<setw(18)<<"SUBJECT"<<setw(4)<<e;
		cout<<"\n"<<setw(11)<<e<<setw(2)<<"1"<<setw(19)<<"Nursery English"<<setw(22)<<"Oxford Publisher"<<setw(11)<<"English"<<setw(4)<<e;
		cout<<"\n"<<setw(11)<<e<<setw(2)<<"2"<<setw(16)<<"Nursery Urdu"<<setw(25)<<"Oxford Publisher"<<setw(8)<<"Urdu"<<setw(7)<<e;
		cout<<"\n"<<setw(11)<<e<<setw(2)<<"3"<<setw(16)<<"Nursery Math"<<setw(25)<<"Oxford Publisher"<<setw(8)<<"Math"<<setw(7)<<e<<endl;
		cout<<setw(11);
		for(int l=1;l<60;l++)
		{
		
		cout<<e;
		
		}
	}
		else if(v=="kg 1")
	{
		cout<<setw(11);
		for(int l=1;l<60;l++)
		{
		
		cout<<e;
		
		}
		cout<<endl<<setw(11)<<e<<setw(45)<<" A B C   A C A D E M Y "<<setw(13)<<e<<endl; 
		cout<<setw(11)<<e;
		for(int q=1;q<=57;q++)
		{
				
		cout<<f;
		}
		cout<<e;
		
		cout<<"\n"<<setw(11)<<e<<setw(3)<<"S#"<<setw(15)<<"NAME OF BOOK "<<setw(18)<<"PUBLISHER"<<setw(18)<<"SUBJECT"<<setw(4)<<e;
		cout<<"\n"<<setw(11)<<e<<setw(2)<<"1"<<setw(19)<<"English for Kg 1"<<setw(22)<<"Famous Publisher"<<setw(11)<<"English"<<setw(4)<<e;
		cout<<"\n"<<setw(11)<<e<<setw(2)<<"2"<<setw(16)<<"Urdu For kg 1"<<setw(25)<<"Famous Publisher"<<setw(8)<<"Urdu"<<setw(7)<<e;
		cout<<"\n"<<setw(11)<<e<<setw(2)<<"3"<<setw(16)<<"Math for kg 1"<<setw(25)<<"Famous Publisher"<<setw(8)<<"Math"<<setw(7)<<e;
		cout<<"\n"<<setw(11)<<e<<setw(2)<<"4"<<setw(16)<<"Draw for kg 1"<<setw(25)<<"Famous Publisher"<<setw(11)<<"Drawing"<<setw(4)<<e<<endl;
		cout<<setw(11);
		for(int l=1;l<60;l++)
		{
		
		cout<<e;
		
		}
		
	}
	

		else if(v=="kg 2")
	{
		cout<<setw(11);
		for(int l=1;l<60;l++)
		{
		
		cout<<e;
		
		}
		cout<<endl<<setw(11)<<e<<setw(45)<<" A B C   A C A D E M Y "<<setw(13)<<e<<endl; 
			cout<<setw(11)<<e;
			for(int q=1;q<=57;q++)
			{
				
		cout<<f;
			}
		cout<<e;
		cout<<"\n"<<setw(11)<<e<<setw(3)<<"S#"<<setw(15)<<"NAME OF BOOK "<<setw(16)<<"PUBLISHER"<<setw(16)<<"SUBJECT"<<setw(8)<<e;
		cout<<"\n"<<setw(11)<<e<<setw(2)<<"1"<<setw(19)<<"English for Kg 1"<<setw(20)<<"Famous Publisher"<<setw(9)<<"English"<<setw(8)<<e;
		cout<<"\n"<<setw(11)<<e<<setw(2)<<"2"<<setw(16)<<"Urdu For kg 2"<<setw(23)<<"Famous Publisher"<<setw(6)<<"Urdu"<<setw(11)<<e;
		cout<<"\n"<<setw(11)<<e<<setw(2)<<"3"<<setw(16)<<"Math for kg 2"<<setw(23)<<"Famous Publisher"<<setw(6)<<"Math"<<setw(11)<<e;
		cout<<"\n"<<setw(11)<<e<<setw(2)<<"4"<<setw(16)<<"Draw for kg 2"<<setw(23)<<"Famous Publisher"<<setw(9)<<"Drawing"<<setw(8)<<e;
		cout<<"\n"<<setw(11)<<e<<setw(2)<<"5"<<setw(16)<<"G.k. for kg 2"<<setw(23)<<"Famous Publisher"<<setw(13)<<"General Kn."<<setw(4)<<e<<endl;
		cout<<setw(11);
		for(int l=1;l<60;l++)
		{
		
		cout<<e;
		
		}
		
	}
		else if(v=="class 1")
	{
		cout<<setw(11);
		for(int l=1;l<60;l++)
		{
		
		cout<<e;
		
		}
		cout<<endl<<setw(11)<<e<<setw(45)<<" A B C   A C A D E M Y "<<setw(13)<<e<<endl; 
			cout<<setw(11)<<e;
			for(int q=1;q<=57;q++)
			{
				
			cout<<f;
		}
		cout<<e;
		cout<<"\n"<<setw(11)<<e<<setw(3)<<"S#"<<setw(15)<<"NAME OF BOOK "<<setw(17)<<"PUBLISHER"<<setw(16)<<"SUBJECT"<<setw(7)<<e;
		cout<<"\n"<<setw(11)<<e<<setw(2)<<"1"<<setw(22)<<"English for Class 1"<<setw(16)<<"Gaba Publisher"<<setw(11)<<"English"<<setw(7)<<e;
		cout<<"\n"<<setw(11)<<e<<setw(2)<<"2"<<setw(19)<<"Urdu for Class 1"<<setw(19)<<"Gaba Publisher"<<setw(8)<<"Urdu"<<setw(10)<<e;
		cout<<"\n"<<setw(11)<<e<<setw(2)<<"3"<<setw(19)<<"Math for Class 1"<<setw(19)<<"Gaba Publisher"<<setw(8)<<"Math"<<setw(10)<<e;
		cout<<"\n"<<setw(11)<<e<<setw(2)<<"4"<<setw(19)<<"Draw for Class 1"<<setw(19)<<"Gaba Publisher"<<setw(11)<<"Drawing"<<setw(7)<<e;
		cout<<"\n"<<setw(11)<<e<<setw(2)<<"5"<<setw(21)<<"S.S.T. for Class 1"<<setw(17)<<"Gaba Publisher"<<setw(10)<<"S.S.T."<<setw(8)<<e;
		cout<<"\n"<<setw(11)<<e<<setw(2)<<"6"<<setw(23)<<"Science for Class 1 "<<setw(15)<<"Gaba Publisher"<<setw(11)<<"Science"<<setw(7)<<e<<endl;
		cout<<setw(11);
		for(int l=1;l<60;l++)
		{
		
		cout<<e;
		
		}
		
	}
		else if(v=="class 2")
	{
		cout<<setw(11);
		for(int l=1;l<60;l++)
		{
		
		cout<<e;
		
		}
		cout<<endl<<setw(11)<<e<<setw(45)<<" A B C   A C A D E M Y "<<setw(13)<<e<<endl; 
			cout<<setw(11)<<e;
			for(int q=1;q<=57;q++)
			{
				
			cout<<f;
		}
		cout<<e;
		cout<<"\n"<<setw(11)<<e<<setw(3)<<"S#"<<setw(15)<<"NAME OF BOOK "<<setw(17)<<"PUBLISHER"<<setw(16)<<"SUBJECT"<<setw(7)<<e;
		cout<<"\n"<<setw(11)<<e<<setw(2)<<"1"<<setw(22)<<"English for Class 2"<<setw(16)<<"Gaba Publisher"<<setw(11)<<"English"<<setw(7)<<e;
		cout<<"\n"<<setw(11)<<e<<setw(2)<<"2"<<setw(19)<<"Urdu for Class 2"<<setw(19)<<"Gaba Publisher"<<setw(8)<<"Urdu"<<setw(10)<<e;
		cout<<"\n"<<setw(11)<<e<<setw(2)<<"3"<<setw(19)<<"Math for Class 2"<<setw(19)<<"Gaba Publisher"<<setw(8)<<"Math"<<setw(10)<<e;
		cout<<"\n"<<setw(11)<<e<<setw(2)<<"4"<<setw(19)<<"Draw for Class 2"<<setw(19)<<"Gaba Publisher"<<setw(11)<<"Drawing"<<setw(7)<<e;
		cout<<"\n"<<setw(11)<<e<<setw(2)<<"5"<<setw(21)<<"S.S.T. for Class 2"<<setw(17)<<"Gaba Publisher"<<setw(10)<<"S.S.T."<<setw(8)<<e;
		cout<<"\n"<<setw(11)<<e<<setw(2)<<"6"<<setw(23)<<"Science for Class 2 "<<setw(15)<<"Gaba Publisher"<<setw(11)<<"Science"<<setw(7)<<e<<endl;
		cout<<setw(11);
		for(int l=1;l<60;l++)
		{
		
		cout<<e;
		
		}
		
	}
	else if(v=="class 3")
	{
		cout<<setw(11);
		for(int l=1;l<60;l++)
		{
		
		cout<<e;
		
		}
		cout<<endl<<setw(11)<<e<<setw(45)<<" A B C   A C A D E M Y "<<setw(13)<<e<<endl; 
			cout<<setw(11)<<e;
			for(int q=1;q<=57;q++)
			{
				
			cout<<f;
			}
			cout<<e;
		cout<<"\n"<<setw(11)<<e<<setw(3)<<"S#"<<setw(15)<<"NAME OF BOOK "<<setw(17)<<"PUBLISHER"<<setw(16)<<"SUBJECT"<<setw(7)<<e;
		cout<<"\n"<<setw(11)<<e<<setw(2)<<"1"<<setw(22)<<"English for Class 3"<<setw(16)<<"Gaba Publisher"<<setw(11)<<"English"<<setw(7)<<e;
		cout<<"\n"<<setw(11)<<e<<setw(2)<<"2"<<setw(19)<<"Urdu for Class 3"<<setw(19)<<"Gaba Publisher"<<setw(8)<<"Urdu"<<setw(10)<<e;
		cout<<"\n"<<setw(11)<<e<<setw(2)<<"3"<<setw(20)<<"Islam for Class 3"<<setw(18)<<"Gaba Publisher"<<setw(9)<<"Islam"<<setw(9)<<e;
		cout<<"\n"<<setw(11)<<e<<setw(2)<<"4"<<setw(19)<<"Math for Class 3"<<setw(19)<<"Gaba Publisher"<<setw(8)<<"Math"<<setw(10)<<e;
		cout<<"\n"<<setw(11)<<e<<setw(2)<<"5"<<setw(19)<<"Draw for Class 3"<<setw(19)<<"Gaba Publisher"<<setw(11)<<"Drawing"<<setw(7)<<e;
		cout<<"\n"<<setw(11)<<e<<setw(2)<<"6"<<setw(21)<<"S.S.T. for Class 3"<<setw(17)<<"Gaba Publisher"<<setw(10)<<"S.S.T."<<setw(8)<<e;
		cout<<"\n"<<setw(11)<<e<<setw(2)<<"7"<<setw(23)<<"Science for Class 3 "<<setw(15)<<"Gaba Publisher"<<setw(11)<<"Science"<<setw(7)<<e<<endl;
		cout<<setw(11);
		for(int l=1;l<60;l++)
		{
		
		cout<<e;
		
		}
		
	}
	else if(v=="class 4")
	{
		cout<<setw(11);
		for(int l=1;l<60;l++)
		{
		
		cout<<e;
		
		}
		cout<<endl<<setw(11)<<e<<setw(45)<<" A B C   A C A D E M Y "<<setw(13)<<e<<endl; 
			cout<<setw(11)<<e;
			for(int q=1;q<=57;q++)
			{
				
			cout<<f;
		}
		cout<<e;
		cout<<"\n"<<setw(11)<<e<<setw(3)<<"S#"<<setw(15)<<"NAME OF BOOK "<<setw(17)<<"PUBLISHER"<<setw(16)<<"SUBJECT"<<setw(7)<<e;
		cout<<"\n"<<setw(11)<<e<<setw(2)<<"1"<<setw(14)<<"English IV "<<setw(26)<<"Oxford Publisher"<<setw(9)<<"English"<<setw(7)<<e;
		cout<<"\n"<<setw(11)<<e<<setw(2)<<"2"<<setw(10)<<"Urdu IV"<<setw(30)<<"Oxford Publisher"<<setw(6)<<"Urdu"<<setw(10)<<e;
		cout<<"\n"<<setw(11)<<e<<setw(2)<<"3"<<setw(11)<<"Islam IV"<<setw(29)<<"Oxford Publisher"<<setw(7)<<"Islam"<<setw(9)<<e;
		cout<<"\n"<<setw(11)<<e<<setw(2)<<"4"<<setw(10)<<"Math IV"<<setw(30)<<"Oxford Publisher"<<setw(6)<<"Math"<<setw(10)<<e;
		cout<<"\n"<<setw(11)<<e<<setw(2)<<"5"<<setw(13)<<"Drawing IV"<<setw(27)<<"Oxford Publisher"<<setw(9)<<"Drawing"<<setw(7)<<e;
		cout<<"\n"<<setw(11)<<e<<setw(2)<<"6"<<setw(16)<<"S. Studies IV"<<setw(24)<<"Oxford Publisher"<<setw(8)<<"S.S.T."<<setw(8)<<e;
		cout<<"\n"<<setw(11)<<e<<setw(2)<<"7"<<setw(14)<<"Science IV "<<setw(26)<<"Oxford Publisher"<<setw(9)<<"Science"<<setw(7)<<e<<endl;
		cout<<setw(11);
		for(int l=1;l<60;l++)
		{
		
		cout<<e;
		
		}
		
	}
	else if(v=="class 5")
	{
		cout<<setw(11);
		for(int l=1;l<60;l++)
		{
		
		cout<<e;
		
		}
		cout<<endl<<setw(11)<<e<<setw(45)<<" A B C   A C A D E M Y "<<setw(13)<<e<<endl; 
			cout<<setw(11)<<e;
			for(int q=1;q<=57;q++)
			{
				
			cout<<f;
		}
		cout<<e;
		cout<<"\n"<<setw(11)<<e<<setw(3)<<"S#"<<setw(15)<<"NAME OF BOOK "<<setw(17)<<"PUBLISHER"<<setw(16)<<"SUBJECT"<<setw(7)<<e;
		cout<<"\n"<<setw(11)<<e<<setw(2)<<"1"<<setw(12)<<"English V"<<setw(28)<<"Oxford Publisher"<<setw(9)<<"English"<<setw(7)<<e;
		cout<<"\n"<<setw(11)<<e<<setw(2)<<"2"<<setw(9)<<"Urdu V"<<setw(31)<<"Oxford Publisher"<<setw(6)<<"Urdu"<<setw(10)<<e;
		cout<<"\n"<<setw(11)<<e<<setw(2)<<"3"<<setw(10)<<"Islam V"<<setw(30)<<"Oxford Publisher"<<setw(7)<<"Islam"<<setw(9)<<e;
		cout<<"\n"<<setw(11)<<e<<setw(2)<<"4"<<setw(9)<<"Math V"<<setw(31)<<"Oxford Publisher"<<setw(6)<<"Math"<<setw(10)<<e;
		cout<<"\n"<<setw(11)<<e<<setw(2)<<"5"<<setw(13)<<"Computer V"<<setw(27)<<"Oxford Publisher"<<setw(10)<<"Computer"<<setw(6)<<e;
		cout<<"\n"<<setw(11)<<e<<setw(2)<<"6"<<setw(12)<<"Drawing V"<<setw(28)<<"Oxford Publisher"<<setw(9)<<"Drawing"<<setw(7)<<e;
		cout<<"\n"<<setw(11)<<e<<setw(2)<<"7"<<setw(15)<<"S. Studies V"<<setw(25)<<"Oxford Publisher"<<setw(8)<<"S.S.T."<<setw(8)<<e;
		cout<<"\n"<<setw(11)<<e<<setw(2)<<"8"<<setw(13)<<"Science V "<<setw(27)<<"Oxford Publisher"<<setw(9)<<"Science"<<setw(7)<<e<<endl;
		cout<<setw(11);
		for(int l=1;l<60;l++)
		{
		
		cout<<e;
		
		}
		
	}
	else if(v=="class 6")
	{
		cout<<setw(11);
		for(int l=1;l<60;l++)
		{
		
		cout<<e;
		
		}
		cout<<endl<<setw(11)<<e<<setw(45)<<" A B C   A C A D E M Y "<<setw(13)<<e<<endl; 
			cout<<setw(11)<<e;
			for(int q=1;q<=57;q++)
			{
				
			cout<<f;
		}
		cout<<e;
		cout<<"\n"<<setw(11)<<e<<setw(3)<<"S#"<<setw(15)<<"NAME OF BOOK "<<setw(17)<<"PUBLISHER"<<setw(16)<<"SUBJECT"<<setw(7)<<e;
		cout<<"\n"<<setw(11)<<e<<setw(2)<<"1"<<setw(13)<<"English VI"<<setw(27)<<"Sindh Text Board"<<setw(9)<<"English"<<setw(7)<<e;
		cout<<"\n"<<setw(11)<<e<<setw(2)<<"2"<<setw(10)<<"Urdu VI"<<setw(30)<<"Sindh Text Board"<<setw(6)<<"Urdu"<<setw(10)<<e;
		cout<<"\n"<<setw(11)<<e<<setw(2)<<"3"<<setw(11)<<"Islam VI"<<setw(29)<<"Sindh Text Board"<<setw(7)<<"Islam"<<setw(9)<<e;
		cout<<"\n"<<setw(11)<<e<<setw(2)<<"4"<<setw(10)<<"Math VI"<<setw(30)<<"Sindh Text Board"<<setw(6)<<"Math"<<setw(10)<<e;
		cout<<"\n"<<setw(11)<<e<<setw(2)<<"5"<<setw(14)<<"Computer VI"<<setw(26)<<"Sindh Text Board"<<setw(10)<<"Computer"<<setw(6)<<e;
		cout<<"\n"<<setw(11)<<e<<setw(2)<<"6"<<setw(13)<<"Drawing VI"<<setw(27)<<"Sindh Text Board"<<setw(9)<<"Drawing"<<setw(7)<<e;
		cout<<"\n"<<setw(11)<<e<<setw(2)<<"7"<<setw(12)<<"Sindhi VI"<<setw(28)<<"Sindh Text Board"<<setw(8)<<"Sindhi"<<setw(8)<<e;
		cout<<"\n"<<setw(11)<<e<<setw(2)<<"8"<<setw(16)<<"S. Studies VI"<<setw(24)<<"Sindh Text Board"<<setw(8)<<"S.S.T."<<setw(8)<<e;
		cout<<"\n"<<setw(11)<<e<<setw(2)<<"9"<<setw(13)<<"Science VI"<<setw(27)<<"Sindh Text Board"<<setw(9)<<"Science"<<setw(7)<<e<<endl;
		cout<<setw(11);
		for(int l=1;l<60;l++)
		{
		
		cout<<e;
		
		}
		
	}
	else if(v=="class 7")
	{
		cout<<setw(11);
		for(int l=1;l<60;l++)
		{
		
		cout<<e;
		
		}
		cout<<endl<<setw(11)<<e<<setw(45)<<" A B C   A C A D E M Y "<<setw(13)<<e<<endl; 
			cout<<setw(11)<<e;
			for(int q=1;q<=57;q++)
			{
				
		cout<<f;
		}
		cout<<e;
		cout<<"\n"<<setw(11)<<e<<setw(3)<<"S#"<<setw(15)<<"NAME OF BOOK "<<setw(17)<<"PUBLISHER"<<setw(16)<<"SUBJECT"<<setw(7)<<e;
		cout<<"\n"<<setw(11)<<e<<setw(2)<<"1"<<setw(14)<<"English VII"<<setw(26)<<"Sindh Text Board"<<setw(9)<<"English"<<setw(7)<<e;
		cout<<"\n"<<setw(11)<<e<<setw(2)<<"2"<<setw(11)<<"Urdu VII"<<setw(29)<<"Sindh Text Board"<<setw(6)<<"Urdu"<<setw(10)<<e;
		cout<<"\n"<<setw(11)<<e<<setw(2)<<"3"<<setw(12)<<"Islam VII"<<setw(28)<<"Sindh Text Board"<<setw(7)<<"Islam"<<setw(9)<<e;
		cout<<"\n"<<setw(11)<<e<<setw(2)<<"4"<<setw(11)<<"Math VII"<<setw(29)<<"Sindh Text Board"<<setw(6)<<"Math"<<setw(10)<<e;
		cout<<"\n"<<setw(11)<<e<<setw(2)<<"5"<<setw(15)<<"Computer VII"<<setw(25)<<"Sindh Text Board"<<setw(10)<<"Computer"<<setw(6)<<e;
		cout<<"\n"<<setw(11)<<e<<setw(2)<<"6"<<setw(14)<<"Drawing VII"<<setw(26)<<"Sindh Text Board"<<setw(9)<<"Drawing"<<setw(7)<<e;
		cout<<"\n"<<setw(11)<<e<<setw(2)<<"7"<<setw(13)<<"Sindhi VII"<<setw(27)<<"Sindh Text Board"<<setw(8)<<"Sindhi"<<setw(8)<<e;
		cout<<"\n"<<setw(11)<<e<<setw(2)<<"8"<<setw(17)<<"S. Studies VII"<<setw(23)<<"Sindh Text Board"<<setw(8)<<"S.S.T."<<setw(8)<<e;
		cout<<"\n"<<setw(11)<<e<<setw(2)<<"9"<<setw(14)<<"Science VII"<<setw(26)<<"Sindh Text Board"<<setw(9)<<"Science"<<setw(7)<<e<<endl;
		cout<<setw(11);
		for(int l=1;l<60;l++)
		{
		
		cout<<e;
		
		}
		
	}
	else if(v=="class 8")
	{
		cout<<setw(11);
		for(int l=1;l<60;l++)
		{
		
		cout<<e;
		
		}
		cout<<endl<<setw(11)<<e<<setw(45)<<" A B C   A C A D E M Y "<<setw(13)<<e<<endl; 
			cout<<setw(11)<<e;
			for(int q=1;q<=57;q++)
			{
				
			cout<<f;
		}
		cout<<e;
		cout<<"\n"<<setw(11)<<e<<setw(3)<<"S#"<<setw(15)<<"NAME OF BOOK "<<setw(17)<<"PUBLISHER"<<setw(16)<<"SUBJECT"<<setw(7)<<e;
		cout<<"\n"<<setw(11)<<e<<setw(2)<<"1"<<setw(15)<<"English VIII"<<setw(25)<<"Sindh Text Board"<<setw(9)<<"English"<<setw(7)<<e;
		cout<<"\n"<<setw(11)<<e<<setw(2)<<"2"<<setw(12)<<"Urdu VIII"<<setw(28)<<"Sindh Text Board"<<setw(6)<<"Urdu"<<setw(10)<<e;
		cout<<"\n"<<setw(11)<<e<<setw(2)<<"3"<<setw(13)<<"Islam VIII"<<setw(27)<<"Sindh Text Board"<<setw(7)<<"Islam"<<setw(9)<<e;
		cout<<"\n"<<setw(11)<<e<<setw(2)<<"4"<<setw(12)<<"Math VIII"<<setw(28)<<"Sindh Text Board"<<setw(6)<<"Math"<<setw(10)<<e;
		cout<<"\n"<<setw(11)<<e<<setw(2)<<"5"<<setw(16)<<"Computer VIII"<<setw(24)<<"Sindh Text Board"<<setw(10)<<"Computer"<<setw(6)<<e;
		cout<<"\n"<<setw(11)<<e<<setw(2)<<"6"<<setw(15)<<"Drawing VIII"<<setw(25)<<"Sindh Text Board"<<setw(9)<<"Drawing"<<setw(7)<<e;
		cout<<"\n"<<setw(11)<<e<<setw(2)<<"7"<<setw(14)<<"Sindhi VIII"<<setw(26)<<"Sindh Text Board"<<setw(8)<<"Sindhi"<<setw(8)<<e;
		cout<<"\n"<<setw(11)<<e<<setw(2)<<"8"<<setw(17)<<"S. Studies VII"<<setw(23)<<"Sindh Text Board"<<setw(8)<<"S.S.T."<<setw(8)<<e;
		cout<<"\n"<<setw(11)<<e<<setw(2)<<"9"<<setw(15)<<"Science VIII"<<setw(25)<<"Sindh Text Board"<<setw(9)<<"Science"<<setw(7)<<e<<endl;
		cout<<setw(11);
		for(int l=1;l<60;l++)
		{
		
		cout<<e;
		
		}
		
	}
	else if(v=="class 9")
	{
		cout<<setw(11);
		for(int l=1;l<60;l++)
		{
		
		cout<<e;
		
		}
		cout<<endl<<setw(11)<<e<<setw(45)<<" A B C   A C A D E M Y "<<setw(13)<<e<<endl; 
			cout<<setw(11)<<e;
			for(int q=1;q<=57;q++)
			{
				
			cout<<f;
		}
		cout<<e;
		cout<<"\n"<<setw(11)<<e<<setw(3)<<"S#"<<setw(15)<<"NAME OF BOOK "<<setw(17)<<"PUBLISHER"<<setw(16)<<"SUBJECT"<<setw(7)<<e;
		cout<<"\n"<<setw(11)<<e<<setw(2)<<"1"<<setw(16)<<"P. Studies IX"<<setw(24)<<"Sindh Text Board"<<setw(8)<<"P.S.T."<<setw(8)<<e;
		cout<<"\n"<<setw(11)<<e<<setw(2)<<"2"<<setw(15)<<"Chemistry IX"<<setw(25)<<"Sindh Text Board"<<setw(11)<<"Chemistry"<<setw(5)<<e;
		cout<<"\n"<<setw(11)<<e<<setw(2)<<"3"<<setw(13)<<"English IX"<<setw(27)<<"Sindh Text Board"<<setw(9)<<"English"<<setw(7)<<e;
		cout<<"\n"<<setw(11)<<e<<setw(2)<<"4"<<setw(12)<<"Sindhi IX"<<setw(28)<<"Sindh Text Board"<<setw(8)<<"Sindhi"<<setw(8)<<e;
		cout<<"\n"<<setw(11)<<e<<setw(2)<<"5"<<setw(14)<<"Computer IX"<<setw(26)<<"Sindh Text Board"<<setw(10)<<"Computer"<<setw(6)<<e<<endl;
		cout<<setw(11);
		for(int l=1;l<60;l++)
		{
		
		cout<<e;
		
		}
		
	}
	else if(v=="class 10")
	{
		cout<<setw(11);
		for(int l=1;l<60;l++)
		{
		
		cout<<e;
		
		}
		cout<<endl<<setw(11)<<e<<setw(45)<<" A B C   A C A D E M Y "<<setw(13)<<e<<endl; 
			cout<<setw(11)<<e;
			for(int q=1;q<=57;q++)
			{
				
			cout<<f;
		}
		cout<<e;
		cout<<"\n"<<setw(11)<<e<<setw(3)<<"S#"<<setw(15)<<"NAME OF BOOK "<<setw(17)<<"PUBLISHER"<<setw(16)<<"SUBJECT"<<setw(7)<<e;
		cout<<"\n"<<setw(11)<<e<<setw(2)<<"1"<<setw(12)<<"English X"<<setw(28)<<"Sindh Text Board"<<setw(9)<<"English"<<setw(7)<<e;
		cout<<"\n"<<setw(11)<<e<<setw(2)<<"2"<<setw(9)<<"Urdu X"<<setw(31)<<"Sindh Text Board"<<setw(6)<<"Urdu"<<setw(10)<<e;
		cout<<"\n"<<setw(11)<<e<<setw(2)<<"3"<<setw(10)<<"Islam X"<<setw(30)<<"Sindh Text Board"<<setw(7)<<"Islam"<<setw(9)<<e;
		cout<<"\n"<<setw(11)<<e<<setw(2)<<"4"<<setw(9)<<"Math X"<<setw(31)<<"Sindh Text Board"<<setw(6)<<"Math"<<setw(10)<<e;
		cout<<"\n"<<setw(11)<<e<<setw(2)<<"5"<<setw(12)<<"Physics X"<<setw(28)<<"Sindh Text Board"<<setw(10)<<"Computer"<<setw(6)<<e<<endl;
		cout<<setw(11);
		for(int l=1;l<60;l++)
		{
		
		cout<<e;
		
		}
		
	}
	else
	{
		cout<<"You have choose an invalid class please choose again"<<endl;
		system("pause");
		system("cls");
		main();	
	}
	
	
	
}
void policya(void)
{
	
	char e=15;
	system("cls");
	cout<<"\n"<<e<<" Student must pass the entry which is according to the class\n for which He/She is applying"<<endl;
	cout<<e<<" Student must bring A transfer and character certificate from\n the previous school he attend"<<endl;
	cout<<e<<" Student must bring A transfer and character certificate from\n the previous school he attend"<<endl;
	cout<<e<<" Student must attach a copy of his birth certificate and\n form B along with the addmission form"<<endl;
	
}
void policyb(void)
{
	char e=15;
	system("cls");
	cout<<"\n"<<e<<" Student must bring His\Her identity card\n"<<endl;
	cout<<e<<" There is always a zero tollerence against any kind of viollence \n made by any student in any other case His/Her name will\n be cutt off from the school"<<endl;
	cout<<e<<" Student who remains absent for more than three days without any \n written application along with the medical certificate\n (in case of illness) considered to be restigated from the school"<<endl;
	cout<<e<<" Fee should be paid at the 10th of every month otherwise school \nreserved the rights to charges 500 rupees at late fee fine charges"<<endl;
	cout<<e<<" Mobile phones are strictly prohibit in the school";	
}
void policyc(void)
	{
		char e=15;
		system("cls");
		cout<<"\n"<<e<<" Talking about school affairs is strictly prohibted\n for student and staff in any social site\n";
		cout<<e<<" Negative comments about school and strictly prohibit\n if any staff/Student found in doing so Her/His Salery/Fee\n will be detain and He/She will be terminated from the school\n";
	}
void policyd(void)
{
	char e=15;
	system("cls");
	cout<<"\n"<<e<<" Any staff member cannot leave the school \n without a one month notice period "<<endl;
	cout<<e<<" Managment of ABC academy reserved the right to\n terminate any staff member at any time"<<endl;
	cout<<e<<" In any case the decision of principal will be final"<<endl;
	cout<<e<<" Every staff member should subbmit his qualification document before joining"<<endl;
	cout<<e<<" No sibbling allowed in the staff";
}
	

void add(string v)

{
	system("cls");	
	if(v=="nursery")
	{
		cout<<"Enter the Name of of student\n(Please use a single - before entering the name (-Shoaib Noor))\n";
		cin.ignore();
		getline(cin,c1[k1]);
		cout<<"Enter the Father name of student\n(Please use a single - before entering the name (-Noor Mohammad))\n";
		cin.ignore();
		getline(cin,d1[k1]);
		cout<<"Enter the Ressedential Address\n(Please use a single - before entering the name (-Street 6))\n";
		cin.ignore();
		getline(cin,ad1[k1]);
		cout<<"Enter Telephone Number\n";
		cin>>nums1[k1];
		k1++;
	}
		else if(v=="kg 1")
	{
		cout<<"Enter the Name of of student\n(Please use a single - before entering the name (-Shoaib Noor))\n";
		cin.ignore();
		getline(cin,c2[k2]);
		cout<<"Enter the Father name of student\n(Please use a single - before entering the name (-Noor Mohammad))\n";
		cin.ignore();
		getline(cin,d2[k2]);
		cout<<"Enter the Ressedential Address\n(Please use a single - before entering the name (-Street 6))\n";
		cin.ignore();
		getline(cin,ad2[k2]);
		cout<<"Enter Telephone Number\n";
		cin>>nums2[k2];
		k2++;
		
	}
	else if(v=="kg 2")
	{
		cout<<"Enter the Name of of student\n(Please use a single - before entering the name (-Shoaib Noor))\n";
		cin.ignore();
		getline(cin,c3[k3]);
		cout<<"Enter the Father name of student\n(Please use a single - before entering the name (-Noor Mohammad))\n";
		cin.ignore();
		getline(cin,d3[k3]);
		cout<<"Enter the Ressedential Address\n(Please use a single - before entering the name (-Street 6))\n";
		getline(cin,ad3[k3]);
		cout<<"Enter Telephone Number\n";
		cin>>nums3[k3];
		k3++;
	}
		else if(v=="class 1")
	{
		cout<<"Enter the Name of of student\n(Please use a single - before entering the name (-Shoaib Noor))\n";
		cin.ignore();
		getline(cin,c4[k4]);
		cout<<"Enter the Father name of student\n(Please use a single - before entering the name (-Noor Mohammad))\n";
		cin.ignore();
		getline(cin,d4[k4]);
		cout<<"Enter the Ressedential Address\n(Please use a single - before entering the name (-Street 6))\n";
		getline(cin,ad4[k4]);
		cout<<"Enter Telephone Number\n";
		cin>>nums4[k4];
		k4++;
	}
		else if(v=="class 2")
	{
		cout<<"Enter the Name of of student\n(Please use a single - before entering the name (-Shoaib Noor))\n";
		getline(cin,c5[k5]);
		cout<<"Enter the Father name of student\n(Please use a single - before entering the name (-Noor Mohammad))\n";
		cin.ignore();
		getline(cin,d5[k5]);
		cout<<"Enter the Ressedential Address\n(Please use a single - before entering the name (-Street 6))\n";
		cin.ignore();
		getline(cin,ad5[k5]);
		cout<<"Enter Telephone Number\n";
		cin>>nums5[k5];
		k5++;
	}
	else if(v=="class 3")
	{
		cout<<"Enter the Name of of student\n(Please use a single - before entering the name (-Shoaib Noor))\n";
		cin.ignore();
		getline(cin,c6[k6]);
		cout<<"Enter the Father name of student\n(Please use a single - before entering the name (-Noor Mohammad))\n";
		cin.ignore();
		getline(cin,d6[k6]);
		cout<<"Enter the Name of of student\n(Please use a single - before entering the name (-Shoaib Noor))\n";
		cin.ignore();
		getline(cin,ad6[k6]);
		cout<<"Enter Telephone Number\n";
		cin>>nums6[k6];
		k6++;
	}
	else if(v=="class 4")
	{
		cout<<"Enter the Name of of student\n(Please use a single - before entering the name (-Shoaib Noor))\n";
		cin.ignore();
		getline(cin,c7[k7]);
		cout<<"Enter the Father name of student\n(Please use a single - before entering the name (-Noor Mohammad))\n";
		cin.ignore();
		getline(cin,d7[k7]);
		cout<<"Enter the Ressedential Address\n(Please use a single - before entering the name (-Street 6))\n";
		cin.ignore();
		getline(cin,ad7[k7]);
		cout<<"Enter Telephone Number\n";
		cin>>nums7[k7];
		k7++;
	}
	else if(v=="class 5")
	{
		cout<<"Enter the Name of of student\n(Please use a single - before entering the name (-Shoaib Noor))\n";
		cin.ignore();
		getline(cin,c8[k8]);
		cout<<"Enter the Father name of student\n(Please use a single - before entering the name (-Noor Mohammad))\n";
		cin.ignore();
		getline(cin,d8[k8]);
		cout<<"Enter the Ressedential Address\n(Please use a single - before entering the name (-Street 6))\n";
		cin.ignore();
		getline(cin,ad8[k8]);
		cout<<"Enter Telephone Number\n";
		cin>>nums8[k8];
		k8++;
	}
	else if(v=="class 6")
	{
		cout<<"Enter the Name of of student\n(Please use a single - before entering the name (-Shoaib Noor))\n";
		cin.ignore();
		getline(cin,c9[k9]);
		cout<<"Enter the Father name of student\n(Please use a single - before entering the name (-Noor Mohammad))\n";
		cin.ignore();
		getline(cin,d9[k9]);
		cout<<"Enter the Ressedential Address\n(Please use a single - before entering the name (-Street 6))\n";
		cin.ignore();
		getline(cin,ad9[k9]);
		cout<<"Enter Telephone Number\n";
		cin>>nums9[k9];
		k9++;
	}
	else if(v=="class 7")
	{
		cout<<"Enter the Name of of student\n(Please use a single - before entering the name (-Shoaib Noor))\n";
		cin.ignore();
		getline(cin,c10[k10]);
		cout<<"Enter the Father name of student\n(Please use a single - before entering the name (-Noor Mohammad))\n";
		cin.ignore();
		getline(cin,d10[k10]);
		cout<<"Enter the Ressedential Address\n(Please use a single - before entering the name (-Street 6))\n";
		cin.ignore();
		getline(cin,ad10[k10]);
		cout<<"Enter Telephone Number\n";
		cin>>nums10[k10];
		k10++;
	}
	else if(v=="class 8")
	{
		cout<<"Enter the Name of of student\n(Please use a single - before entering the name (-Shoaib Noor))\n";
		getline(cin,c11[k11]);
		cout<<"Enter the Father name of student\n(Please use a single - before entering the name (-Noor Mohammad))\n";
		cin.ignore();
		getline(cin,d11[k11]);
		cout<<"Enter the Ressedential Address\n(Please use a single - before entering the name (-Street 6))\n";
		getline(cin,ad11[k11]);
		cout<<"Enter Telephone Number\n";
		cin>>nums11[k11];
		k11++;
	}
	else if(v=="class 9")
	{
		cout<<"Enter the Name of of student\n(Please use a single - before entering the name (-Shoaib Noor))\n";
		cin.ignore();
		getline(cin,c12[k12]);
		cout<<"Enter the Father name of student\n(Please use a single - before entering the name (-Noor Mohammad))\n";
		cin.ignore();
		getline(cin,d12[k12]);
		cout<<"Enter the Ressedential Address\n(Please use a single - before entering the name (-Street 6))\n";
		cin.ignore();
		getline(cin,ad12[k12]);
		cout<<"Enter Telephone Number\n";
		cin>>nums12[k12];
		k12++;
	}
	else if(v=="class 10")
	{
		cout<<"Enter the Name of of student\n(Please use a single - before entering the name (-Shoaib Noor))\n";
		cin.ignore();
		getline(cin,c13[k13]);
		cout<<"Enter the Father name of student\n(Please use a single - before entering the name (-Noor Mohammad))\n";
		cin.ignore();
		getline(cin,d13[k13]);
		cout<<"Enter the Ressedential Address\n(Please use a single - before entering the name (-Street 6))\n";
		cin.ignore();
		getline(cin,ad13[k13]);
		cout<<"Enter Telephone Number\n";
		cin>>nums13[k13];
		k13++;
		
	}
	
			}
void  alerta(string v)
	{
	char e=178,d=22;
	int bb,cc,aa;
	string mm;

	
	if (v=="nursery")
	{
		
		cout<<"Enter the Roll Number of student\n";
		cin>>bb;
		system("cls");
		cout<<"Enter Month\n";
		cin>>mm;
		cout<<"Enter The amount unpaid (in Figure e.g 5000)\n";
		cin>>aa;
		
		cc=bb-1;
		for(int j=0;j<k1;j++)
		
	{
			
		
		if(j==cc)
		{
			cout<<setw(5);
			for(int q=1;q<=67;q++)
			{
				
				cout<<e;
			}
			cout<<endl<<setw(5)<<e<<setw(45)<<" A B C   A C A D E M Y "<<setw(21)<<e<<endl; 
			cout<<setw(5)<<e;
			for(int q=1;q<=65;q++)
			{
				
			cout<<f;
			}
			cout<<e;
			cout<<endl<<setw(5)<<e<<"  Dear:"<<setw(19)<<c1[j]<<"   Father`s Name:"<<setw(20)<<d1[j]<<setw(3)<<e<<endl; 
			cout<<setw(5)<<e;
			for(int q=1;q<=65;q++)
			{
				
				cout<<"=";
			}
			cout<<e;
			cout<<endl<<setw(5)<<e<<"  Your fee status is unpaid for the month of "<<setw(10)<<mm<<setw(11)<<e<<endl;
			cout<<setw(5)<<e<<"  Kindly submit your fee before 10th of this month otherwise"<<setw(6)<<e<<endl;
			cout<<setw(5)<<e<<"  School will charge 500 late fee charges per day if you have"<<setw(5)<<e<<endl;
			cout<<setw(5)<<e<<"  paid your monthly fee kindly ignore this"<<setw(24)<<e<<endl;
			cout<<setw(5)<<e<<"  Amount Unpaid ="<<setw(7)<<aa<<setw(42)<<e<<endl;
			cout<<setw(5)<<e<<"  Signature of accountant______________"<<setw(27)<<e<<endl;
		
			cout<<setw(5);
			for(int q=1;q<=67;q++)
			{
				
				cout<<e;
			}
		}
		
	}
}


	else if (v=="kg 1")
	{
		
		cout<<"Enter the Roll Number of student\n";
		cin>>bb;
		system("cls");
		cout<<"Enter Month\n";
		cin>>mm;
		cout<<"Enter The amount unpaid (in Figure e.g 5000)\n";
		cin>>aa;
		
		cc=bb-1;
		for(int j=0;j<k2;j++)
		
		{
			
		
		if(j==cc)
		{
			cout<<setw(5);
			for(int q=1;q<=67;q++)
			{
				
			cout<<e;
			}
			cout<<endl<<setw(5)<<e<<setw(45)<<" A B C   A C A D E M Y "<<setw(21)<<e<<endl; 
			cout<<setw(5)<<e;
			for(int q=1;q<=65;q++)
			{
				
			cout<<f;
			}
			cout<<e;
			cout<<endl<<setw(5)<<e<<"  Dear:"<<setw(19)<<c2[j]<<"   Father`s Name:"<<setw(20)<<d2[j]<<setw(3)<<e<<endl; 
			cout<<setw(5)<<e;
			for(int q=1;q<=65;q++)
			{
				
				cout<<"=";
			}
			cout<<e;
			cout<<endl<<setw(5)<<e<<"  Your fee status is unpaid for the month of "<<setw(10)<<mm<<setw(11)<<e<<endl;
			cout<<setw(5)<<e<<"  Kindly submit your fee before 10th of this month otherwise"<<setw(6)<<e<<endl;
			cout<<setw(5)<<e<<"  School will charge 500 late fee charges per day if you have"<<setw(5)<<e<<endl;
			cout<<setw(5)<<e<<"  paid your monthly fee kindly ignore this"<<setw(24)<<e<<endl;
			cout<<setw(5)<<e<<"  Amount Unpaid ="<<setw(7)<<aa<<setw(42)<<e<<endl;
			cout<<setw(5)<<e<<"  Signature of accountant______________"<<setw(27)<<e<<endl;
		
			cout<<setw(5);
			for(int q=1;q<=67;q++)
			{
				
				cout<<e;
			}
		}
		
	}
}
	else if (v=="kg 2")
{
		
		cout<<"Enter the Roll Number of student\n";
		cin>>bb;
		system("cls");
		cout<<"Enter Month\n";
		cin>>mm;
		cout<<"Enter The amount unpaid (in Figure e.g 5000)\n";
		cin>>aa;
		cc=bb-1;
		for(int j=0;j<k3;j++)
		
	{
			
		
		if(j==cc)
		{
			cout<<setw(5);
			for(int q=1;q<=67;q++)
			{
				
				cout<<e;
			}
			cout<<endl<<setw(5)<<e<<setw(45)<<" A B C   A C A D E M Y "<<setw(21)<<e<<endl; 
			cout<<setw(5)<<e;
			for(int q=1;q<=65;q++)
			{
				
			cout<<f;
			}
			cout<<e;
			
			cout<<endl<<setw(5)<<e<<"  Dear:"<<setw(19)<<c3[j]<<"   Father`s Name:"<<setw(20)<<d3[j]<<setw(3)<<e<<endl; 
			cout<<setw(5)<<e;
			for(int q=1;q<=65;q++)
			{
				
				cout<<"=";
			}
			cout<<e;
			cout<<endl<<setw(5)<<e<<"  Your fee status is unpaid for the month of "<<setw(10)<<mm<<setw(11)<<e<<endl;
			cout<<setw(5)<<e<<"  Kindly submit your fee before 10th of this month otherwise"<<setw(6)<<e<<endl;
			cout<<setw(5)<<e<<"  School will charge 500 late fee charges per day if you have"<<setw(5)<<e<<endl;
			cout<<setw(5)<<e<<"  paid your monthly fee kindly ignore this"<<setw(24)<<e<<endl;
			cout<<setw(5)<<e<<"  Amount Unpaid ="<<setw(7)<<aa<<setw(42)<<e<<endl;
			cout<<setw(5)<<e<<"  Signature of accountant______________"<<setw(27)<<e<<endl;
		
			cout<<setw(5);
			for(int q=1;q<=67;q++)
			{
				
				cout<<e;
			}
		}
		
	}
}
		else if (v=="class 1")
		{
		
		cout<<"Enter the Roll Number of student\n";
		cin>>bb;
		system("cls");
		cout<<"Enter Month\n";
		cin>>mm;
		cout<<"Enter The amount unpaid (in Figure e.g 5000)\n";
		cin>>aa;
		
		cc=bb-1;
		for(int j=0;j<k4;j++)
		
	{
			
		
		if(j==cc)
		{
			cout<<setw(5);
			for(int q=1;q<=67;q++)
			{
				
				cout<<e;
			}
			cout<<endl<<setw(5)<<e<<setw(45)<<" A B C   A C A D E M Y "<<setw(21)<<e<<endl; 
			cout<<setw(5)<<e;
			for(int q=1;q<=65;q++)
			{
				
			cout<<f;
			}
			cout<<e;
			
			
			cout<<endl<<setw(5)<<e<<"  Dear:"<<setw(19)<<c5[j]<<"   Father`s Name:"<<setw(20)<<d5[j]<<setw(3)<<e<<endl; 
			cout<<setw(5)<<e;
			for(int q=1;q<=65;q++)
			{
				
				cout<<"=";
			}
			cout<<e;
			cout<<endl<<setw(5)<<e<<"  Your fee status is unpaid for the month of "<<setw(10)<<mm<<setw(11)<<e<<endl;
			cout<<setw(5)<<e<<"  Kindly submit your fee before 10th of this month otherwise"<<setw(6)<<e<<endl;
			cout<<setw(5)<<e<<"  School will charge 500 late fee charges per day if you have"<<setw(5)<<e<<endl;
			cout<<setw(5)<<e<<"  paid your monthly fee kindly ignore this"<<setw(24)<<e<<endl;
			cout<<setw(5)<<e<<"  Amount Unpaid ="<<setw(7)<<aa<<setw(42)<<e<<endl;
			cout<<setw(5)<<e<<"  Signature of accountant______________"<<setw(27)<<e<<endl;
		
			cout<<setw(5);
			for(int q=1;q<=67;q++)
			{
				
				cout<<e;
			}
		}
		
	}
}
		else if (v=="class 2")
		{
		
		cout<<"Enter the Roll Number of student\n";
		cin>>bb;
		system("cls");
		cout<<"Enter Month\n";
		cin>>mm;
		cout<<"Enter The amount unpaid (in Figure e.g 5000)\n";
		cin>>aa;
		
		cc=bb-1;
		for(int j=0;j<k5;j++)
		
	{
			
		
		if(j==cc)
		{
			cout<<setw(5);
			for(int q=1;q<=67;q++)
			{
				
				cout<<e;
			}
			cout<<endl<<setw(5)<<e<<setw(45)<<" A B C   A C A D E M Y "<<setw(21)<<e<<endl; 
			cout<<setw(5)<<e;
			for(int q=1;q<=65;q++)
			{
				
			cout<<f;
			}
			cout<<e;
			
			cout<<endl<<setw(5)<<e<<"  Dear:"<<setw(19)<<c5[j]<<"   Father`s Name:"<<setw(20)<<d5[j]<<setw(3)<<e<<endl; 
			cout<<setw(5)<<e;
			for(int q=1;q<=65;q++)
			{
				
				cout<<"=";
			}
			cout<<e;
			cout<<endl<<setw(5)<<e<<"  Your fee status is unpaid for the month of "<<setw(10)<<mm<<setw(11)<<e<<endl;
			cout<<setw(5)<<e<<"  Kindly submit your fee before 10th of this month otherwise"<<setw(6)<<e<<endl;
			cout<<setw(5)<<e<<"  School will charge 500 late fee charges per day if you have"<<setw(5)<<e<<endl;
			cout<<setw(5)<<e<<"  paid your monthly fee kindly ignore this"<<setw(24)<<e<<endl;
			cout<<setw(5)<<e<<"  Amount Unpaid ="<<setw(7)<<aa<<setw(42)<<e<<endl;
			cout<<setw(5)<<e<<"  Signature of accountant______________"<<setw(27)<<e<<endl;
		
			cout<<setw(5);
			for(int q=1;q<=67;q++)
			{
				
				cout<<e;
			}
		}
		
	}
}
else if (v=="class 3")
		{
		
		cout<<"Enter the Roll Number of student\n";
		cin>>bb;
		system("cls");
		cout<<"Enter Month\n";
		cin>>mm;
		cout<<"Enter The amount unpaid (in Figure e.g 5000)\n";
		cin>>aa;
		
		cc=bb-1;
		for(int j=0;j<k6;j++)
		
	{
			
		
		if(j==cc)
		{
			cout<<setw(5);
			for(int q=1;q<=67;q++)
			{
				
				cout<<e;
			}
			cout<<endl<<setw(5)<<e<<setw(45)<<" A B C   A C A D E M Y "<<setw(21)<<e<<endl; 
			cout<<setw(5)<<e;
			for(int q=1;q<=65;q++)
			{
				
			cout<<f;
			}
			cout<<e;
			cout<<endl<<setw(5)<<e<<"  Dear:"<<setw(19)<<c6[j]<<"   Father`s Name:"<<setw(20)<<d6[j]<<setw(3)<<e<<endl; 
			cout<<setw(5)<<e;
			for(int q=1;q<=65;q++)
			{
				
				cout<<d;
			}
			cout<<e;
			cout<<endl<<setw(5)<<e<<"  Your fee status is unpaid for the month of "<<setw(10)<<mm<<setw(11)<<e<<endl;
			cout<<setw(5)<<e<<"  Kindly submit your fee before 10th of this month otherwise"<<setw(6)<<e<<endl;
			cout<<setw(5)<<e<<"  School will charge 500 late fee charges per day if you have"<<setw(5)<<e<<endl;
			cout<<setw(5)<<e<<"  paid your monthly fee kindly ignore this"<<setw(24)<<e<<endl;
			cout<<setw(5)<<e<<"  Amount Unpaid ="<<setw(7)<<aa<<setw(42)<<e<<endl;
			cout<<setw(5)<<e<<"  Signature of accountant______________"<<setw(27)<<e<<endl;
		
			cout<<setw(5);
			for(int q=1;q<=67;q++)
			{
				
				cout<<e;
			}
		}
		
	}
}

		else if (v=="class 4")
	{
		
		cout<<"Enter the Roll Number of student\n";
		cin>>bb;
		system("cls");
		cout<<"Enter Month\n";
		cin>>mm;
		cout<<"Enter The amount unpaid (in Figure e.g 5000)\n";
		cin>>aa;
		
		cc=bb-1;
		for(int j=0;j<k7;j++)
		
	{
			
		
		if(j==cc)
		{
			cout<<setw(5);
			for(int q=1;q<=67;q++)
			{
				
				cout<<e;
			}
			cout<<endl<<setw(5)<<e<<setw(45)<<" A B C   A C A D E M Y "<<setw(21)<<e<<endl; 
			cout<<setw(5)<<e;
			for(int q=1;q<=65;q++)
			{
				
			cout<<f;
			}
			cout<<e;
			
			cout<<endl<<setw(5)<<e<<"  Dear:"<<setw(19)<<c7[j]<<"   Father`s Name:"<<setw(20)<<d7[j]<<setw(3)<<e<<endl; 
			cout<<setw(5)<<e;
			for(int q=1;q<=65;q++)
			{
				
				cout<<d;
			}
			cout<<e;
			cout<<endl<<setw(5)<<e<<"  Your fee status is unpaid for the month of "<<setw(10)<<mm<<setw(11)<<e<<endl;
			cout<<setw(5)<<e<<"  Kindly submit your fee before 10th of this month otherwise"<<setw(6)<<e<<endl;
			cout<<setw(5)<<e<<"  School will charge 500 late fee charges per day if you have"<<setw(5)<<e<<endl;
			cout<<setw(5)<<e<<"  paid your monthly fee kindly ignore this"<<setw(24)<<e<<endl;
			cout<<setw(5)<<e<<"  Amount Unpaid ="<<setw(7)<<aa<<setw(42)<<e<<endl;
			cout<<setw(5)<<e<<"  Signature of accountant______________"<<setw(27)<<e<<endl;
		
			cout<<setw(5);
			for(int q=1;q<=67;q++)
			{
				
				cout<<e;
			}
		}
		
	}
}
	
		else if (v=="class 5")
	{
		
		cout<<"Enter the Roll Number of student\n";
		cin>>bb;
		system("cls");
		cout<<"Enter Month\n";
		cin>>mm;
		cout<<"Enter The amount unpaid (in Figure e.g 5000)\n";
		cin>>aa;
		
		cc=bb-1;
		for(int j=0;j<k8;j++)
		
	{
			
		
		if(j==cc)
		{
			cout<<setw(5);
			for(int q=1;q<=67;q++)
			{
				
				cout<<e;
			}
			cout<<endl<<setw(5)<<e<<setw(45)<<" A B C   A C A D E M Y "<<setw(21)<<e<<endl; 
			cout<<setw(5)<<e;
			for(int q=1;q<=65;q++)
			{
				
			cout<<f;
			}
			cout<<e;
			
			cout<<endl<<setw(5)<<e<<"  Dear:"<<setw(19)<<c8[j]<<"   Father`s Name:"<<setw(20)<<d8[j]<<setw(3)<<e<<endl; 
			cout<<setw(5)<<e;
			for(int q=1;q<=65;q++)
			{
				
				cout<<"=";
			}
			cout<<e;
			
			cout<<endl<<setw(5)<<e<<"  Your fee status is unpaid for the month of "<<setw(10)<<mm<<setw(11)<<e<<endl;
			cout<<setw(5)<<e<<"  Kindly submit your fee before 10th of this month otherwise"<<setw(6)<<e<<endl;
			cout<<setw(5)<<e<<"  School will charge 500 late fee charges per day if you have"<<setw(5)<<e<<endl;
			cout<<setw(5)<<e<<"  paid your monthly fee kindly ignore this"<<setw(24)<<e<<endl;
			cout<<setw(5)<<e<<"  Amount Unpaid ="<<setw(7)<<aa<<setw(42)<<e<<endl;
			cout<<setw(5)<<e<<"  Signature of accountant______________"<<setw(27)<<e<<endl;
		
			cout<<setw(5);
			for(int q=1;q<=67;q++)
			{
				
				cout<<e;
			}
		}
		
	}
}
		else if (v=="class 6")
{
		
		cout<<"Enter the Roll Number of student\n";
		cin>>bb;
		system("cls");
		cout<<"Enter Month\n";
		cin>>mm;
		cout<<"Enter The amount unpaid (in Figure e.g 5000)\n";
		cin>>aa;
		
		cc=bb-1;
		for(int j=0;j<k9;j++)
		
		{
			
		
			if(j==cc)
			{
			cout<<setw(5);
			for(int q=1;q<=67;q++)
			{
				
				cout<<e;
			}
			cout<<endl<<setw(5)<<e<<setw(45)<<" A B C   A C A D E M Y "<<setw(21)<<e<<endl; 
			cout<<setw(5)<<e;
			for(int q=1;q<=65;q++)
			{
				
			cout<<f;
			}
			cout<<e;
			cout<<endl<<setw(5)<<e<<"  Dear:"<<setw(19)<<c9[j]<<"   Father`s Name:"<<setw(20)<<d9[j]<<setw(3)<<e<<endl; 
			cout<<setw(5)<<e;
			for(int q=1;q<=65;q++)
			{
				
				cout<<"=";
			}
			cout<<e;
			cout<<endl<<setw(5)<<e<<"  Your fee status is unpaid for the month of "<<setw(10)<<mm<<setw(11)<<e<<endl;
			cout<<setw(5)<<e<<"  Kindly submit your fee before 10th of this month otherwise"<<setw(6)<<e<<endl;
			cout<<setw(5)<<e<<"  School will charge 500 late fee charges per day if you have"<<setw(5)<<e<<endl;
			cout<<setw(5)<<e<<"  paid your monthly fee kindly ignore this"<<setw(24)<<e<<endl;
			cout<<setw(5)<<e<<"  Amount Unpaid ="<<setw(7)<<aa<<setw(42)<<e<<endl;
			cout<<setw(5)<<e<<"  Signature of accountant______________"<<setw(27)<<e<<endl;
		
			cout<<setw(5);
			for(int q=1;q<=67;q++)
			{
				
				cout<<e;
			}
		}
		
	}
}
		else if (v=="class 7")
	{
		
		cout<<"Enter the Roll Number of student\n";
		cin>>bb;
		system("cls");
		cout<<"Enter Month\n";
		cin>>mm;
		cout<<"Enter The amount unpaid (in Figure e.g 5000)\n";
		cin>>aa;
		
		cc=bb-1;
		for(int j=0;j<k10;j++)
		
	{
			
		
		if(j==cc)
		{
			cout<<setw(5);
			for(int q=1;q<=67;q++)
			{
				
				cout<<e;
			}
			cout<<endl<<setw(5)<<e<<setw(45)<<" A B C   A C A D E M Y "<<setw(21)<<e<<endl; 
			cout<<setw(5)<<e;
			for(int q=1;q<=65;q++)
			{
				
			cout<<f;
			}
			cout<<e;
			
			cout<<endl<<setw(5)<<e<<"  Dear:"<<setw(19)<<c10[j]<<"   Father`s Name:"<<setw(20)<<d10[j]<<setw(3)<<e<<endl; 
			cout<<setw(5)<<e;
			for(int q=1;q<=65;q++)
			{
				
				cout<<"=";
			}
			cout<<e;
			cout<<endl<<setw(5)<<e<<"  Your fee status is unpaid for the month of "<<setw(10)<<mm<<setw(11)<<e<<endl;
			cout<<setw(5)<<e<<"  Kindly submit your fee before 10th of this month otherwise"<<setw(6)<<e<<endl;
			cout<<setw(5)<<e<<"  School will charge 500 late fee charges per day if you have"<<setw(5)<<e<<endl;
			cout<<setw(5)<<e<<"  paid your monthly fee kindly ignore this"<<setw(24)<<e<<endl;
			cout<<setw(5)<<e<<"  Amount Unpaid ="<<setw(7)<<aa<<setw(42)<<e<<endl;
			cout<<setw(5)<<e<<"  Signature of accountant______________"<<setw(27)<<e<<endl;
		
			cout<<setw(5);
			for(int q=1;q<=67;q++)
			{
				
				cout<<e;
			}
		}
		
	}
}
		else if (v=="class 8")
	{
		
		cout<<"Enter the Roll Number of student\n";
		cin>>bb;
		system("cls");
		cout<<"Enter Month\n";
		cin>>mm;
		cout<<"Enter The amount unpaid (in Figure e.g 5000)\n";
		cin>>aa;
		
		cc=bb-1;
		for(int j=0;j<k11;j++)
		
	{
			
		
		if(j==cc)
		{
			cout<<setw(5);
			for(int q=1;q<=67;q++)
			{
				
				cout<<e;
			}
			cout<<endl<<setw(5)<<e<<setw(45)<<" A B C   A C A D E M Y "<<setw(21)<<e<<endl; 
			cout<<setw(5)<<e;
			for(int q=1;q<=65;q++)
			{
				
			cout<<f;
			}
			cout<<e;
			
			cout<<endl<<setw(5)<<e<<"  Dear:"<<setw(19)<<c11[j]<<"   Father`s Name:"<<setw(20)<<d11[j]<<setw(3)<<e<<endl; 
			cout<<setw(5)<<e;
			for(int q=1;q<=65;q++)
			{
				
				cout<<"=";
			}
			cout<<e;
			cout<<endl<<setw(5)<<e<<"  Your fee status is unpaid for the month of "<<setw(10)<<mm<<setw(11)<<e<<endl;
			cout<<setw(5)<<e<<"  Kindly submit your fee before 10th of this month otherwise"<<setw(6)<<e<<endl;
			cout<<setw(5)<<e<<"  School will charge 500 late fee charges per day if you have"<<setw(5)<<e<<endl;
			cout<<setw(5)<<e<<"  paid your monthly fee kindly ignore this"<<setw(24)<<e<<endl;
			cout<<setw(5)<<e<<"  Amount Unpaid ="<<setw(7)<<aa<<setw(42)<<e<<endl;
			cout<<setw(5)<<e<<"  Signature of accountant______________"<<setw(27)<<e<<endl;
		
			cout<<setw(5);
			for(int q=1;q<=67;q++)
			{
				
				cout<<e;
			}
		}
		
	}
}
		else if (v=="class 9")
	{
		
		cout<<"Enter the Roll Number of student\n";
		cin>>bb;
		system("cls");
		cout<<"Enter Month\n";
		cin>>mm;
		cout<<"Enter The amount unpaid (in Figure e.g 5000)\n";
		cin>>aa;
		
		cc=bb-1;
		for(int j=0;j<k12;j++)
		
	{
			
		
			if(j==cc)
		{
			cout<<setw(5);
			for(int q=1;q<=67;q++)
			{
				
				cout<<e;
			}
			cout<<endl<<setw(5)<<e<<setw(45)<<" A B C   A C A D E M Y "<<setw(21)<<e<<endl; 
			cout<<setw(5)<<e;
			for(int q=1;q<=65;q++)
			{
				
			cout<<f;
			}
			cout<<e;
			
			cout<<endl<<setw(5)<<e<<"  Dear:"<<setw(19)<<c12[j]<<"   Father`s Name:"<<setw(20)<<d12[j]<<setw(3)<<e<<endl; 
			cout<<setw(5)<<e;
			for(int q=1;q<=65;q++)
			{
				
				cout<<"=";
			}
			cout<<e;
			cout<<endl<<setw(5)<<e<<"  Your fee status is unpaid for the month of "<<setw(10)<<mm<<setw(11)<<e<<endl;
			cout<<setw(5)<<e<<"  Kindly submit your fee before 10th of this month otherwise"<<setw(6)<<e<<endl;
			cout<<setw(5)<<e<<"  School will charge 500 late fee charges per day if you have"<<setw(5)<<e<<endl;
			cout<<setw(5)<<e<<"  paid your monthly fee kindly ignore this"<<setw(24)<<e<<endl;
			cout<<setw(5)<<e<<"  Amount Unpaid ="<<setw(7)<<aa<<setw(42)<<e<<endl;
			cout<<setw(5)<<e<<"  Signature of accountant______________"<<setw(27)<<e<<endl;
		
			cout<<setw(5);
			for(int q=1;q<=67;q++)
			{
				
				cout<<e;
			}
		}
		
	}
}
	else if (v=="class 10")
{
		
		cout<<"Enter the Roll Number of student\n";
		cin>>bb;
		system("cls");
		cout<<"Enter Month\n";
		cin>>mm;
		cout<<"Enter The amount unpaid (in Figure e.g 5000)\n";
		cin>>aa;
		
		cc=bb-1;
		for(int j=0;j<k13;j++)
		
	{
			
		
		if(j==cc)
		{
			cout<<setw(5);
			for(int q=1;q<=67;q++)
			{
				
				cout<<e;
			}
			cout<<endl<<setw(5)<<e<<setw(45)<<" A B C   A C A D E M Y "<<setw(21)<<e<<endl; 
			cout<<setw(5)<<e;
			for(int q=1;q<=65;q++)
			{
				
			cout<<f;
			}
			cout<<e;
			
			cout<<endl<<setw(5)<<e<<"  Dear:"<<setw(19)<<c13[j]<<"   Father`s Name:"<<setw(20)<<d13[j]<<setw(3)<<e<<endl; 
			cout<<setw(5)<<e;
			for(int q=1;q<=65;q++)
			{
				
				cout<<"=";
			}
			cout<<e;
			cout<<endl<<setw(5)<<e<<"  Your fee status is unpaid for the month of "<<setw(10)<<mm<<setw(11)<<e<<endl;
			cout<<setw(5)<<e<<"  Kindly submit your fee before 10th of this month otherwise"<<setw(6)<<e<<endl;
			cout<<setw(5)<<e<<"  School will charge 500 late fee charges per day if you have"<<setw(5)<<e<<endl;
			cout<<setw(5)<<e<<"  paid your monthly fee kindly ignore this"<<setw(24)<<e<<endl;
			cout<<setw(5)<<e<<"  Amount Unpaid ="<<setw(7)<<aa<<setw(42)<<e<<endl;
			cout<<setw(5)<<e<<"  Signature of accountant______________"<<setw(27)<<e<<endl;
		
			cout<<setw(5);
			for(int q=1;q<=67;q++)
			{
				
				cout<<e;
			}
		}
		
	}
}		
		else
		{
		
		cout<<"You have chose an invalid class please choose again"<<endl;
		system("pause");
		system("cls");
		main();
		}
}

void transfer(string v)
	{
	char e=4,d=22;
	int bb,cc;
	string mm,aa,ll;

	
	if (v=="nursery")
	{
		
		cout<<"Enter the Roll Number of student\n";
		cin>>bb;
		system("cls");
		cout<<"Enter Reason for transfering\n";
		cin.ignore();
		getline(cin,mm);
		cout<<"Time period of staying in the school must be in digits (-5 years)\n";
		cin.ignore();
		getline(cin,aa);
		
		cc=bb-1;
		for(int j=0;j<k1;j++)
		
	{
			
		
		if(j==cc)
		{
			cout<<setw(5);
			for(int q=1;q<=67;q++)
			{
				
				cout<<e;
			}
			cout<<endl<<setw(5)<<e<<setw(45)<<" A B C   A C A D E M Y "<<setw(21)<<e<<endl; 
			cout<<setw(5)<<e;
			for(int q=1;q<=65;q++)
			{
				
			cout<<f;
			}
			cout<<e;
			cout<<endl<<setw(5)<<e<<"  Name:"<<setw(19)<<c1[j]<<"   Father`s Name:"<<setw(20)<<d1[j]<<setw(3)<<e<<endl; 
			cout<<setw(5)<<e<<"  Is the student of our school for the last "<<setw(19)<<aa<<setw(3)<<e<<endl;
			cout<<setw(5)<<e<<"  and he/she had passed class nursery from our school is now "<<setw(5)<<e<<endl;
			cout<<setw(5)<<e<<"  leaving the school due to "<<setw(31)<<mm<<setw(7)<<e<<endl;
			cout<<setw(5)<<e<<"  is hold a good moral character and relegeous charachter"<<setw(9)<<e<<endl;
			cout<<setw(5)<<e<<"  Signature of Principle______________"<<setw(28)<<e<<endl;
		
			cout<<setw(5);
			for(int q=1;q<=67;q++)
			{
				
				cout<<e;
			}
		}
		
	}
}


	else if (v=="kg 1")
	{
		
		cout<<"Enter the Roll Number of student\n";
		cin>>bb;
		system("cls");
		cout<<"Enter Reason for transfering\n";
		cin.ignore();
		getline(cin,mm);
		cout<<"Time period of staying in the school must be like this (-5 years)\n";
		cin.ignore();
		getline(cin,aa);
		
		cc=bb-1;
		for(int j=0;j<k2;j++)
		
	{
			
		
			if(j==cc)
			{
			cout<<setw(5);
			for(int q=1;q<=67;q++)
			{
				
			cout<<e;
			}
			cout<<endl<<setw(5)<<e<<setw(45)<<" A B C   A C A D E M Y "<<setw(21)<<e<<endl; 
			cout<<setw(5)<<e;
			for(int q=1;q<=65;q++)
			{
				
			cout<<f;
			}
			cout<<e;
			cout<<endl<<setw(5)<<e<<"  Name:"<<setw(19)<<c2[j]<<"   Father`s Name:"<<setw(20)<<d2[j]<<setw(3)<<e<<endl; 
			cout<<setw(5)<<e<<"  Is the student of our school for the last "<<setw(19)<<aa<<setw(3)<<e<<endl;
			cout<<setw(5)<<e<<"  and he/she had passed class kg 1 from our school is now "<<setw(8)<<e<<endl;
			cout<<setw(5)<<e<<"  leaving the school due to "<<setw(31)<<mm<<setw(7)<<e<<endl;
			cout<<setw(5)<<e<<"  is hold a good moral character and relegeous charachter"<<setw(9)<<e<<endl;
			cout<<setw(5)<<e<<"  Signature of Principle______________"<<setw(28)<<e<<endl;
		
			cout<<setw(5);
			for(int q=1;q<=67;q++)
			{
				
				cout<<e;
			}
		}
		
	}
}

	else if (v=="kg 2")
{
		
		cout<<"Enter the Roll Number of student\n";
		cin>>bb;
		system("cls");
		cout<<"Enter Reason for transfering\n";
		cin.ignore();
		getline(cin,mm);
		cout<<"Time period of staying in the school must be in digits (-5 years)\n";
		cin.ignore();
		getline(cin,aa);
		
		cc=bb-1;
		for(int j=0;j<k3;j++)
		
	{
			
		
		if(j==cc)
		{
			cout<<setw(5);
			for(int q=1;q<=67;q++)
			{
				
				cout<<e;
			}
			cout<<endl<<setw(5)<<e<<setw(45)<<" A B C   A C A D E M Y "<<setw(21)<<e<<endl; 
			cout<<setw(5)<<e;
			for(int q=1;q<=65;q++)
			{
				
			cout<<f;
			}
			cout<<e;
			cout<<endl<<setw(5)<<e<<"  Name:"<<setw(19)<<c3[j]<<"   Father`s Name:"<<setw(20)<<d3[j]<<setw(3)<<e<<endl; 
			cout<<setw(5)<<e<<"  Is the student of our school for the last "<<setw(19)<<aa<<setw(3)<<e<<endl;
			cout<<setw(5)<<e<<"  and he/she had passed class kg 2 from our school is now "<<setw(8)<<e<<endl;
			cout<<setw(5)<<e<<"  leaving the school due to "<<setw(31)<<mm<<setw(7)<<e<<endl;
			cout<<setw(5)<<e<<"  is hold a good moral character and relegeous charachter"<<setw(9)<<e<<endl;
			cout<<setw(5)<<e<<"  Signature of Principle______________"<<setw(28)<<e<<endl;
		
			cout<<setw(5);
			for(int q=1;q<=67;q++)
			{
				
				cout<<e;
			}
		}
		
	}
}

	else if (v=="class 1")
	{
		
		cout<<"Enter the Roll Number of student\n";
		cin>>bb;
		system("cls");
		cout<<"Enter Reason for transfering\n";
		cin.ignore();
		getline(cin,mm);
		cout<<"Time period of staying in the school must be like this (-5 years)\n";
		cin.ignore();
		getline(cin,aa);
		
		cc=bb-1;
		for(int j=0;j<k4;j++)
		
	{
			
		
		if(j==cc)
		{
			cout<<setw(5);
			for(int q=1;q<=67;q++)
			{
				
				cout<<e;
			}
			cout<<endl<<setw(5)<<e<<setw(45)<<" A B C   A C A D E M Y "<<setw(21)<<e<<endl; 
			cout<<setw(5)<<e;
			for(int q=1;q<=65;q++)
			{
				
			cout<<f;
			}
			cout<<e;
			
			cout<<endl<<setw(5)<<e<<"  Name:"<<setw(19)<<c4[j]<<"   Father`s Name:"<<setw(20)<<d4[j]<<setw(3)<<e<<endl; 
			cout<<setw(5)<<e<<"  Is the student of our school for the last "<<setw(19)<<aa<<setw(3)<<e<<endl;
			cout<<setw(5)<<e<<"  and he/she had passed class I from our school is now "<<setw(11)<<e<<endl;
			cout<<setw(5)<<e<<"  leaving the school due to "<<setw(31)<<mm<<setw(7)<<e<<endl;
			cout<<setw(5)<<e<<"  is hold a good moral character and relegeous charachter"<<setw(9)<<e<<endl;
			cout<<setw(5)<<e<<"  Signature of Principle______________"<<setw(28)<<e<<endl;
		
			cout<<setw(5);
			for(int q=1;q<=67;q++)
			{
				
				cout<<e;
			}
		}
		
	}
}

		else if (v=="class 2")
		{
		
		cout<<"Enter the Roll Number of student\n";
		cin>>bb;
		system("cls");
		cout<<"Enter Reason for transfering\n";
		cin.ignore();
		getline(cin,mm);
		cout<<"Time period of staying in the school must be like this (-5 years)\n";
		cin.ignore();
		getline(cin,aa);
		
		cc=bb-1;
		for(int j=0;j<k5;j++)
		
	{
			
		
		if(j==cc)
		{
			cout<<setw(5);
			for(int q=1;q<=67;q++)
			{
				
				cout<<e;
			}
			cout<<endl<<setw(5)<<e<<setw(45)<<" A B C   A C A D E M Y "<<setw(21)<<e<<endl; 
			cout<<setw(5)<<e;
			for(int q=1;q<=65;q++)
			{
				
			cout<<f;
			}
			cout<<e;
			cout<<endl<<setw(5)<<e<<"  Name:"<<setw(19)<<c5[j]<<"   Father`s Name:"<<setw(20)<<d5[j]<<setw(3)<<e<<endl; 
			cout<<setw(5)<<e<<"  Is the student of our school for the last "<<setw(19)<<aa<<setw(3)<<e<<endl;
			cout<<setw(5)<<e<<"  and he/she had passed class II from our school is now "<<setw(10)<<e<<endl;
			cout<<setw(5)<<e<<"  leaving the school due to "<<setw(31)<<mm<<setw(7)<<e<<endl;
			cout<<setw(5)<<e<<"  is hold a good moral character and relegeous charachter"<<setw(9)<<e<<endl;
			cout<<setw(5)<<e<<"  Signature of Principle______________"<<setw(28)<<e<<endl;
		
			cout<<setw(5);
			for(int q=1;q<=67;q++)
			{
				
				cout<<e;
			}
		}
		
	}
}

else if (v=="class 3")
		{
		
		cout<<"Enter the Roll Number of student\n";
		cin>>bb;
		system("cls");
		cout<<"Enter Reason for transfering\n";
		cin.ignore();
		getline(cin,mm);
		cout<<"Time period of staying in the school must be like this (-5 years)\n";
		cin.ignore();
		getline(cin,aa);
		
		cc=bb-1;
		for(int j=0;j<k6;j++)
		
	{
			
		
		if(j==cc)
		{
			cout<<setw(5);
			for(int q=1;q<=67;q++)
			{
				
				cout<<e;
			}
			cout<<endl<<setw(5)<<e<<setw(45)<<" A B C   A C A D E M Y "<<setw(21)<<e<<endl; 
			cout<<setw(5)<<e;
			for(int q=1;q<=65;q++)
			{
				
			cout<<f;
			}
			cout<<e;
			cout<<endl<<setw(5)<<e<<"  Name:"<<setw(19)<<c6[j]<<"   Father`s Name:"<<setw(20)<<d6[j]<<setw(3)<<e<<endl; 
			cout<<setw(5)<<e<<"  Is the student of our school for the last "<<setw(19)<<aa<<setw(3)<<e<<endl;
			cout<<setw(5)<<e<<"  and he/she had passed class III from our school is now "<<setw(9)<<e<<endl;
			cout<<setw(5)<<e<<"  leaving the school due to "<<setw(31)<<mm<<setw(7)<<e<<endl;
			cout<<setw(5)<<e<<"  is hold a good moral character and relegeous charachter"<<setw(9)<<e<<endl;
			cout<<setw(5)<<e<<"  Signature of Principle______________"<<setw(28)<<e<<endl;
		
			cout<<setw(5);
			for(int q=1;q<=67;q++)
			{
				
				cout<<e;
			}
		}
		
	}
}


		else if (v=="class 4")
	{
		
		cout<<"Enter the Roll Number of student\n";
		cin>>bb;
		system("cls");
		cout<<"Enter Reason for transfering\n";
		cin.ignore();
		getline(cin,mm);
		cout<<"Time period of staying in the school must be like this (-5 years)\n";
		cin.ignore();
		getline(cin,aa);
		
		cc=bb-1;
		for(int j=0;j<k7;j++)
		
	{
			
		
		if(j==cc)
		{
			cout<<setw(5);
			for(int q=1;q<=67;q++)
			{
				
				cout<<e;
			}
			cout<<endl<<setw(5)<<e<<setw(45)<<" A B C   A C A D E M Y "<<setw(21)<<e<<endl; 
			cout<<setw(5)<<e;
			for(int q=1;q<=65;q++)
			{
				
			cout<<f;
			}
			cout<<e;
			
			cout<<endl<<setw(5)<<e<<"  Name:"<<setw(19)<<c1[j]<<"   Father`s Name:"<<setw(20)<<d1[j]<<setw(3)<<e<<endl; 
			cout<<setw(5)<<e<<"  Is the student of our school for the last "<<setw(19)<<aa<<setw(3)<<e<<endl;
			cout<<setw(5)<<e<<"  and he/she had passed class IV from our school is now "<<setw(10)<<e<<endl;
			cout<<setw(5)<<e<<"  leaving the school due to "<<setw(31)<<mm<<setw(7)<<e<<endl;
			cout<<setw(5)<<e<<"  is hold a good moral character and relegeous charachter"<<setw(9)<<e<<endl;
			cout<<setw(5)<<e<<"  Signature of Principle______________"<<setw(28)<<e<<endl;
		
			cout<<setw(5);
			for(int q=1;q<=67;q++)
			{
				
				cout<<e;
			}
		}
		
	}
}

	
		else if (v=="class 5")
	{
		
		cout<<"Enter the Roll Number of student\n";
		cin>>bb;
		system("cls");
		cout<<"Enter Reason for transfering\n";
		cin.ignore();
		getline(cin,mm);
		cout<<"Time period of staying in the school must be like this (-5 years)\n";
		cin.ignore();
		getline(cin,aa);
		
		cc=bb-1;
		for(int j=0;j<k8;j++)
		
	{
			
		
		if(j==cc)
		{
			cout<<setw(5);
			for(int q=1;q<=67;q++)
			{
				
				cout<<e;
			}
			cout<<endl<<setw(5)<<e<<setw(45)<<" A B C   A C A D E M Y "<<setw(21)<<e<<endl; 
			cout<<setw(5)<<e;
			for(int q=1;q<=65;q++)
			{
				
			cout<<f;
			}
			cout<<e;
			cout<<endl<<setw(5)<<e<<"  Name:"<<setw(19)<<c8[j]<<"   Father`s Name:"<<setw(20)<<d8[j]<<setw(3)<<e<<endl; 
			cout<<setw(5)<<e<<"  Is the student of our school for the last "<<setw(19)<<aa<<setw(3)<<e<<endl;
			cout<<setw(5)<<e<<"  and he/she had passed class V from our school is now "<<setw(11)<<e<<endl;
			cout<<setw(5)<<e<<"  leaving the school due to "<<setw(31)<<mm<<setw(7)<<e<<endl;
			cout<<setw(5)<<e<<"  is hold a good moral character and relegeous charachter"<<setw(9)<<e<<endl;
			cout<<setw(5)<<e<<"  Signature of Principle______________"<<setw(28)<<e<<endl;
		
			cout<<setw(5);
			for(int q=1;q<=67;q++)
			{
				
				cout<<e;
			}
		}
		
	}
}

		else if (v=="class 6")
{
		
		cout<<"Enter the Roll Number of student\n";
		cin>>bb;
		system("cls");
		cout<<"Enter Reason for transfering\n";
		cin.ignore();
		getline(cin,mm);
		cout<<"Time period of staying in the school must be like this (-5 years)\n";
		cin.ignore();
		getline(cin,aa);
		
		cc=bb-1;
		for(int j=0;j<k9;j++)
		
	{
			
		
		if(j==cc)
		{
			cout<<setw(5);
			for(int q=1;q<=67;q++)
			{
				
				cout<<e;
			}
			cout<<endl<<setw(5)<<e<<setw(45)<<" A B C   A C A D E M Y "<<setw(21)<<e<<endl; 
			cout<<setw(5)<<e;
			for(int q=1;q<=65;q++)
			{
				
			cout<<f;
			}
			cout<<e;
			cout<<endl<<setw(5)<<e<<"  Name:"<<setw(19)<<c9[j]<<"   Father`s Name:"<<setw(20)<<d9[j]<<setw(3)<<e<<endl; 
			cout<<setw(5)<<e<<"  Is the student of our school for the last "<<setw(19)<<aa<<setw(3)<<e<<endl;
			cout<<setw(5)<<e<<"  and he/she had passed class VI from our school is now "<<setw(10)<<e<<endl;
			cout<<setw(5)<<e<<"  leaving the school due to "<<setw(31)<<mm<<setw(7)<<e<<endl;
			cout<<setw(5)<<e<<"  is hold a good moral character and relegeous charachter"<<setw(9)<<e<<endl;
			cout<<setw(5)<<e<<"  Signature of Principle______________"<<setw(28)<<e<<endl;
		
			cout<<setw(5);
			for(int q=1;q<=67;q++)
			{
				
				cout<<e;
			}
		}
		
	}
}

		else if (v=="class 7")
	{
		
		cout<<"Enter the Roll Number of student\n";
		cin>>bb;
		system("cls");
		cout<<"Enter Reason for transfering\n";
		cin.ignore();
		getline(cin,mm);
		cout<<"Time period of staying in the school must be like this (-5 years)\n";
		cin.ignore();
		getline(cin,aa);
		
		cc=bb-1;
		for(int j=0;j<k10;j++)
		
	{
			
		
		if(j==cc)
		{
			cout<<setw(5);
			for(int q=1;q<=67;q++)
			{
				
				cout<<e;
			}
			
			cout<<endl<<setw(5)<<e<<"  Name:"<<setw(19)<<c10[j]<<"   Father`s Name:"<<setw(20)<<d10[j]<<setw(3)<<e<<endl; 
			cout<<setw(5)<<e<<"  Is the student of our school for the last "<<setw(19)<<aa<<setw(3)<<e<<endl;
			cout<<setw(5)<<e<<"  and he/she had passed class VII from our school is now "<<setw(9)<<e<<endl;
			cout<<setw(5)<<e<<"  leaving the school due to "<<setw(31)<<mm<<setw(7)<<e<<endl;
			cout<<setw(5)<<e<<"  is hold a good moral character and relegeous charachter"<<setw(9)<<e<<endl;
			cout<<setw(5)<<e<<"  Signature of Principle______________"<<setw(28)<<e<<endl;
		
			cout<<setw(5);
			for(int q=1;q<=67;q++)
			{
				
				cout<<e;
			}
		}
		
	}
}

		else if (v=="class 8")
	{
		
		cout<<"Enter the Roll Number of student\n";
		cin>>bb;
		system("cls");
		cout<<"Enter Reason for transfering\n";
		cin.ignore();
		getline(cin,mm);
		cout<<"Time period of staying in the school must be like this (-5 years)\n";
		cin.ignore();
		getline(cin,aa);
		
		cc=bb-1;
		for(int j=0;j<k11;j++)
		
	{
			
		
		if(j==cc)
		{
			cout<<setw(5);
			for(int q=1;q<=67;q++)
			{
				
				cout<<e;
			}
			cout<<endl<<setw(5)<<e<<setw(45)<<" A B C   A C A D E M Y "<<setw(21)<<e<<endl; 
			cout<<setw(5)<<e;
			for(int q=1;q<=65;q++)
			{
				
			cout<<f;
			}
			cout<<e;
			cout<<endl<<setw(5)<<e<<"  Name:"<<setw(19)<<c11[j]<<"   Father`s Name:"<<setw(20)<<d11[j]<<setw(3)<<e<<endl; 
			cout<<setw(5)<<e<<"  Is the student of our school for the last "<<setw(19)<<aa<<setw(3)<<e<<endl;
			cout<<setw(5)<<e<<"  and he/she had passed class VIII from our school is now "<<setw(8)<<e<<endl;
			cout<<setw(5)<<e<<"  leaving the school due to "<<setw(31)<<mm<<setw(7)<<e<<endl;
			cout<<setw(5)<<e<<"  is hold a good moral character and relegeous charachter"<<setw(9)<<e<<endl;
			cout<<setw(5)<<e<<"  Signature of Principle______________"<<setw(28)<<e<<endl;
		
			cout<<setw(5);
			for(int q=1;q<=67;q++)
			{
				
				cout<<e;
			}
		}
		
	}
}

		else if (v=="class 9")
	{
		
		cout<<"Enter the Roll Number of student\n";
		cin>>bb;
		system("cls");
		cout<<"Enter Reason for transfering\n";
		cin.ignore();
		getline(cin,mm);
		cout<<"Time period of staying in the school must be like this (-5 years)\n";
		cin.ignore();
		getline(cin,aa);
		
		cc=bb-1;
		for(int j=0;j<k12;j++)
		
	{
			
		
		if(j==cc)
		{
			cout<<setw(5);
			for(int q=1;q<=67;q++)
			{
				
				cout<<e;
			}
			cout<<endl<<setw(5)<<e<<setw(45)<<" A B C   A C A D E M Y "<<setw(21)<<e<<endl; 
			cout<<setw(5)<<e;
			for(int q=1;q<=65;q++)
			{
				
			cout<<f;
			}
			cout<<e;
			cout<<endl<<setw(5)<<e<<"  Name:"<<setw(19)<<c12[j]<<"   Father`s Name:"<<setw(20)<<d12[j]<<setw(3)<<e<<endl; 
			cout<<setw(5)<<e<<"  Is the student of our school for the last "<<setw(16)<<aa<<setw(6)<<e<<endl;
			cout<<setw(5)<<e<<"  and he/she had passed class IX from our school is now "<<setw(10)<<e<<endl;
			cout<<setw(5)<<e<<"  leaving the school due to "<<setw(31)<<mm<<setw(7)<<e<<endl;
			cout<<setw(5)<<e<<"  is hold a good moral character and relegeous charachter"<<setw(9)<<e<<endl;
			cout<<setw(5)<<e<<"  Signature of Principle______________"<<setw(28)<<e<<endl;
		
			cout<<setw(5);
			for(int q=1;q<=67;q++)
			{
				
				cout<<e;
			}
		}
		
	}
}

	else if (v=="class 10")
{
		
		cout<<"Enter the Roll Number of student\n";
		cin>>bb;
		system("cls");
		cout<<"Enter Reason for transfering\n";
		cin.ignore();
		getline(cin,mm);
		cout<<"Time period of staying in the school must be like this (-5 years)\n";
		cin.ignore();
		getline(cin,aa);
		
		cc=bb-1;
		for(int j=0;j<k13;j++)
		
	{
			
		
		if(j==cc)
		{
			cout<<setw(5);
			for(int q=1;q<=67;q++)
			{
				
				cout<<e;
			}
			cout<<endl<<setw(5)<<e<<setw(45)<<" A B C   A C A D E M Y "<<setw(21)<<e<<endl; 
			cout<<setw(5)<<e;
			for(int q=1;q<=65;q++)
			{
				
			cout<<f;
			}
			cout<<e;
			
			cout<<endl<<setw(5)<<e<<"  Name:"<<setw(19)<<c13[j]<<"   Father`s Name:"<<setw(20)<<d13[j]<<setw(3)<<e<<endl; 
			cout<<setw(5)<<e<<"  Is the student of our school for the last "<<setw(19)<<aa<<setw(3)<<e<<endl;
			cout<<setw(5)<<e<<"  and he/she had passed class X from our school is now "<<setw(11)<<e<<endl;
			cout<<setw(5)<<e<<"  leaving the school due to "<<setw(31)<<mm<<setw(7)<<e<<endl;
			cout<<setw(5)<<e<<"  is hold a good moral character and relegeous charachter"<<setw(9)<<e<<endl;
			cout<<setw(5)<<e<<"  Signature of Principle______________"<<setw(28)<<e<<endl;
		
			cout<<setw(5);
			for(int q=1;q<=67;q++)
			{
				
				cout<<e;
			}
		}
		
	}
}
		
		else
	{
			
		cout<<"You have chose an invalid class please choose again\n";
		system("pause");
		system("cls");
		main();
		}
	}
void sports(string v)
	{
	char e=4;
	int bb,cc;
	string mm,aa;

	
	if (v=="nursery")
	{
		
		cout<<"Enter the Roll Number of student\n";
		cin>>bb;
		cout<<"Enter the type of sports (foot ball , cricket etc)"<<endl;
		cin.ignore();
		getline(cin,mm);
		
		system("cls");
		
		
		cc=bb-1;
		for(int j=0;j<k1;j++)
		
	{
			
		
		if(j==cc)
		{
			cout<<setw(5);
			for(int q=1;q<=67;q++)
			{
				
				cout<<e;
			}
			cout<<endl<<setw(5)<<e<<setw(45)<<" A B C   A C A D E M Y "<<setw(21)<<e<<endl; 
			cout<<setw(5)<<e;
			for(int q=1;q<=65;q++)
			{
				
			cout<<f;
			}
			cout<<e;
			cout<<endl<<setw(5)<<e<<"  Name:"<<setw(19)<<c1[j]<<"   Father`s Name:"<<setw(20)<<d1[j]<<setw(3)<<e<<endl; 
			cout<<setw(5)<<e<<"  Is the student of Nursery class our school and participated "<<setw(4)<<e<<endl;
			cout<<setw(5)<<e<<"  in many "<<setw(13)<<mm<<" matches he/she is also a well behaved"<<setw(5)<<e<<endl;
			cout<<setw(5)<<e<<"  student and holds a good moral and relegeous character"<<setw(10)<<e<<endl;
			cout<<setw(5)<<e<<"  Signature of Principle______________"<<setw(28)<<e<<endl;
		
			cout<<setw(5);
			for(int q=1;q<=67;q++)
			{
				
				cout<<e;
			}
		}
		
	}
}


	else if (v=="kg 1")

{
	cout<<"Enter the Roll Number of student\n";
		cin>>bb;
		cout<<"Enter the type of sports (foot ball , cricket etc)"<<endl;
		cin.ignore();
		getline(cin,mm);
		
		system("cls");
		
		
		cc=bb-1;
		for(int j=0;j<k2;j++)
		
	{
			
		
		if(j==cc)
		{
			cout<<setw(5);
			for(int q=1;q<=67;q++)
			{
				
				cout<<e;
			}
			cout<<endl<<setw(5)<<e<<setw(45)<<" A B C   A C A D E M Y "<<setw(21)<<e<<endl; 
			cout<<setw(5)<<e;
			for(int q=1;q<=65;q++)
			{
				
			cout<<f;
			}
			cout<<e;
			
			cout<<endl<<setw(5)<<e<<"  Name:"<<setw(19)<<c2[j]<<"   Father`s Name:"<<setw(20)<<d2[j]<<setw(3)<<e<<endl; 
			cout<<setw(5)<<e<<"  Is the student of KG I class our school and participated "<<setw(7)<<e<<endl;
			cout<<setw(5)<<e<<"  in many "<<setw(13)<<mm<<" matches he/she is also a well behaved"<<setw(5)<<e<<endl;
			cout<<setw(5)<<e<<"  student and holds a good moral and relegeous character"<<setw(10)<<e<<endl;
			cout<<setw(5)<<e<<"  Signature of Principle______________"<<setw(28)<<e<<endl;
		
			cout<<setw(5);
			for(int q=1;q<=67;q++)
			{
				
				cout<<e;
			}
		}
		
	}
}

	else if (v=="kg 2")
{

		cout<<"Enter the Roll Number of student\n";
		cin>>bb;
		cout<<"Enter the type of sports (foot ball , cricket etc)"<<endl;
		cin.ignore();
		getline(cin,mm);
		
		system("cls");
		
		
		cc=bb-1;
		for(int j=0;j<k1;j++)
		
	{
			
		
		if(j==cc)
		{
			cout<<setw(5);
			for(int q=1;q<=67;q++)
			{
				
				cout<<e;
			}
			cout<<endl<<setw(5)<<e<<setw(45)<<" A B C   A C A D E M Y "<<setw(21)<<e<<endl; 
			cout<<setw(5)<<e;
			for(int q=1;q<=65;q++)
			{
				
			cout<<f;
			}
			cout<<e;
			cout<<endl<<setw(5)<<e<<"  Name:"<<setw(19)<<c3[j]<<"   Father`s Name:"<<setw(20)<<d3[j]<<setw(3)<<e<<endl; 
			cout<<setw(5)<<e<<"  Is the student of KG 2 class our school and participated "<<setw(7)<<e<<endl;
			cout<<setw(5)<<e<<"  in many "<<setw(13)<<mm<<" matches he/she is also a well behaved"<<setw(5)<<e<<endl;
			cout<<setw(5)<<e<<"  student and holds a good moral and relegeous character"<<setw(10)<<e<<endl;
			cout<<setw(5)<<e<<"  Signature of Principle______________"<<setw(28)<<e<<endl;
		
			cout<<setw(5);
			for(int q=1;q<=67;q++)
			{
				
				cout<<e;
			}
		}
		
	}
}

	else if (v=="class 1")
		{
		
		cout<<"Enter the Roll Number of student\n";
		cin>>bb;
		cout<<"Enter the type of sports (foot ball , cricket etc)"<<endl;
		cin.ignore();
		getline(cin,mm);
		
		system("cls");
		
		
		cc=bb-1;
		for(int j=0;j<k1;j++)
		
	{
			
		
		if(j==cc)
		{
			cout<<setw(5);
			for(int q=1;q<=67;q++)
			{
				
				cout<<e;
			}
			cout<<endl<<setw(5)<<e<<setw(45)<<" A B C   A C A D E M Y "<<setw(21)<<e<<endl; 
			cout<<setw(5)<<e;
			for(int q=1;q<=65;q++)
			{
				
			cout<<f;
			}
			cout<<e;
			cout<<endl<<setw(5)<<e<<"  Name:"<<setw(19)<<c4[j]<<"   Father`s Name:"<<setw(20)<<d4[j]<<setw(3)<<e<<endl; 
			cout<<setw(5)<<e<<"  Is the student of class I our school and participated "<<setw(10)<<e<<endl;
			cout<<setw(5)<<e<<"  in many "<<setw(13)<<mm<<" matches he/she is also a well behaved"<<setw(5)<<e<<endl;
			cout<<setw(5)<<e<<"  student and holds a good moral and relegeous character"<<setw(10)<<e<<endl;
			cout<<setw(5)<<e<<"  Signature of Principle______________"<<setw(28)<<e<<endl;
		
			cout<<setw(5);
			for(int q=1;q<=67;q++)
			{
				
				cout<<e;
			}
		}
		
	}
}

		else if (v=="class 2")
		{
		cout<<"Enter the Roll Number of student\n";
		cin>>bb;
		cout<<"Enter the type of sports (foot ball , cricket etc)"<<endl;
		cin.ignore();
		getline(cin,mm);
		
		system("cls");
		
		
		cc=bb-1;
		for(int j=0;j<k5;j++)
		
	{
			
		
		if(j==cc)
		{
			cout<<setw(5);
			for(int q=1;q<=67;q++)
			{
				
				cout<<e;
			}
			cout<<endl<<setw(5)<<e<<setw(45)<<" A B C   A C A D E M Y "<<setw(21)<<e<<endl; 
			cout<<setw(5)<<e;
			for(int q=1;q<=65;q++)
			{
				
			cout<<f;
			}
			cout<<e;
			cout<<endl<<setw(5)<<e<<"  Name:"<<setw(19)<<c5[j]<<"   Father`s Name:"<<setw(20)<<d5[j]<<setw(3)<<e<<endl; 
			cout<<setw(5)<<e<<"  Is the student of class II our school and participated "<<setw(9)<<e<<endl;
			cout<<setw(5)<<e<<"  in many "<<setw(13)<<mm<<" matches he/she is also a well behaved"<<setw(5)<<e<<endl;
			cout<<setw(5)<<e<<"  student and holds a good moral and relegeous character"<<setw(10)<<e<<endl;
			cout<<setw(5)<<e<<"  Signature of Principle______________"<<setw(28)<<e<<endl;
		
			cout<<setw(5);
			for(int q=1;q<=67;q++)
			{
				
				cout<<e;
			}
		}
		
	}
}

	else if (v=="class 3")
	{
	
		cout<<"Enter the Roll Number of student\n";
		cin>>bb;
		cout<<"Enter the type of sports (foot ball , cricket etc)"<<endl;
		cin.ignore();
		getline(cin,mm);
		
		system("cls");
		
		
		cc=bb-1;
		for(int j=0;j<k6;j++)
		
	{
			
		
		if(j==cc)
		{
			cout<<setw(5);
			for(int q=1;q<=67;q++)
			{
				
				cout<<e;
			}
			cout<<endl<<setw(5)<<e<<setw(45)<<" A B C   A C A D E M Y "<<setw(21)<<e<<endl; 
			cout<<setw(5)<<e;
			for(int q=1;q<=65;q++)
			{
				
			cout<<f;
			}
			cout<<e;
			cout<<endl<<setw(5)<<e<<"  Name:"<<setw(19)<<c6[j]<<"   Father`s Name:"<<setw(20)<<d6[j]<<setw(3)<<e<<endl; 
			cout<<setw(5)<<e<<"  Is the student of class III our school and participated "<<setw(8)<<e<<endl;
			cout<<setw(5)<<e<<"  in many "<<setw(13)<<mm<<" matches he/she is also a well behaved"<<setw(5)<<e<<endl;
			cout<<setw(5)<<e<<"  student and holds a good moral and relegeous character"<<setw(10)<<e<<endl;
			cout<<setw(5)<<e<<"  Signature of Principle______________"<<setw(28)<<e<<endl;
		
			cout<<setw(5);
			for(int q=1;q<=67;q++)
			{
				
				cout<<e;
			}
		}
		
	}
}


		else if (v=="class 4")
{
		
		cout<<"Enter the Roll Number of student\n";
		cin>>bb;
		cout<<"Enter the type of sports (foot ball , cricket etc)"<<endl;
		cin.ignore();
		getline(cin,mm);
		
		system("cls");
		
		
		cc=bb-1;
		for(int j=0;j<k7;j++)
		
	{
			
		
		if(j==cc)
		{
			cout<<setw(5);
			for(int q=1;q<=67;q++)
			{
				
				cout<<e;
			}
			cout<<endl<<setw(5)<<e<<setw(45)<<" A B C   A C A D E M Y "<<setw(21)<<e<<endl; 
			cout<<setw(5)<<e;
			for(int q=1;q<=65;q++)
			{
				
			cout<<f;
			}
			cout<<e;
			cout<<endl<<setw(5)<<e<<"  Name:"<<setw(19)<<c7[j]<<"   Father`s Name:"<<setw(20)<<d7[j]<<setw(3)<<e<<endl; 
			cout<<setw(5)<<e<<"  Is the student of class IV our school and participated "<<setw(9)<<e<<endl;
			cout<<setw(5)<<e<<"  in many "<<setw(13)<<mm<<" matches he/she is also a well behaved"<<setw(5)<<e<<endl;
			cout<<setw(5)<<e<<"  student and holds a good moral and relegeous character"<<setw(10)<<e<<endl;
			cout<<setw(5)<<e<<"  Signature of Principle______________"<<setw(28)<<e<<endl;
		
			cout<<setw(5);
			for(int q=1;q<=67;q++)
			{
				
				cout<<e;
			}
		}
		
	}
	}

	
		else if (v=="class 5")
	{
			
		cout<<"Enter the Roll Number of student\n";
		cin>>bb;
		cout<<"Enter the type of sports (foot ball , cricket etc)"<<endl;
		cin.ignore();
		getline(cin,mm);
		
		system("cls");
		
		
		cc=bb-1;
		for(int j=0;j<k8;j++)
		
	{
			
		
		if(j==cc)
		{
			cout<<setw(5);
			for(int q=1;q<=67;q++)
			{
				
				cout<<e;
			}
			cout<<endl<<setw(5)<<e<<setw(45)<<" A B C   A C A D E M Y "<<setw(21)<<e<<endl; 
			cout<<setw(5)<<e;
			for(int q=1;q<=65;q++)
			{
				
			cout<<f;
			}
			cout<<e;
			cout<<endl<<setw(5)<<e<<"  Name:"<<setw(19)<<c8[j]<<"   Father`s Name:"<<setw(20)<<d8[j]<<setw(3)<<e<<endl; 
			cout<<setw(5)<<e<<"  Is the student of class V our school and participated "<<setw(10)<<e<<endl;
			cout<<setw(5)<<e<<"  in many "<<setw(13)<<mm<<" matches he/she is also a well behaved"<<setw(5)<<e<<endl;
			cout<<setw(5)<<e<<"  student and holds a good moral and relegeous character"<<setw(10)<<e<<endl;
			cout<<setw(5)<<e<<"  Signature of Principle______________"<<setw(28)<<e<<endl;
		
			cout<<setw(5);
			for(int q=1;q<=67;q++)
			{
				
				cout<<e;
			}
		}
		
	}
}

		else if (v=="class 6")
{
			
		cout<<"Enter the Roll Number of student\n";
		cin>>bb;
		cout<<"Enter the type of sports (foot ball , cricket etc)"<<endl;
		cin.ignore();
		getline(cin,mm);
		
		system("cls");
		
		
		cc=bb-1;
		for(int j=0;j<k9;j++)
		
	{
			
		
		if(j==cc)
		{
			cout<<setw(5);
			for(int q=1;q<=67;q++)
			{
				
				cout<<e;
			}
			cout<<endl<<setw(5)<<e<<setw(45)<<" A B C   A C A D E M Y "<<setw(21)<<e<<endl; 
			cout<<setw(5)<<e;
			for(int q=1;q<=65;q++)
			{
				
			cout<<f;
			}
			cout<<e;
			cout<<endl<<setw(5)<<e<<"  Name:"<<setw(19)<<c9[j]<<"   Father`s Name:"<<setw(20)<<d9[j]<<setw(3)<<e<<endl; 
			cout<<setw(5)<<e<<"  Is the student of class VI our school and participated "<<setw(9)<<e<<endl;
			cout<<setw(5)<<e<<"  in many "<<setw(13)<<mm<<" matches he/she is also a well behaved"<<setw(5)<<e<<endl;
			cout<<setw(5)<<e<<"  student and holds a good moral and relegeous character"<<setw(10)<<e<<endl;
			cout<<setw(5)<<e<<"  Signature of Principle______________"<<setw(28)<<e<<endl;
		
			cout<<setw(5);
			for(int q=1;q<=67;q++)
			{
				
				cout<<e;
			}
		}
		
	}
}

		else if (v=="class 7")
	{
			
		cout<<"Enter the Roll Number of student\n";
		cin>>bb;
		cout<<"Enter the type of sports (foot ball , cricket etc)"<<endl;
		cin.ignore();
		getline(cin,mm);
		
		system("cls");
		
		
		cc=bb-1;
		for(int j=0;j<k10;j++)
		
	{
			
		
		if(j==cc)
		{
			cout<<setw(5);
			for(int q=1;q<=67;q++)
			{
				
				cout<<e;
			}
			cout<<endl<<setw(5)<<e<<setw(45)<<" A B C   A C A D E M Y "<<setw(21)<<e<<endl; 
			cout<<setw(5)<<e;
			for(int q=1;q<=65;q++)
			{
				
			cout<<f;
			}
			cout<<e;
			cout<<endl<<setw(5)<<e<<"  Name:"<<setw(19)<<c10[j]<<"   Father`s Name:"<<setw(20)<<d10[j]<<setw(3)<<e<<endl; 
			cout<<setw(5)<<e<<"  Is the student of class VII our school and participated "<<setw(8)<<e<<endl;
			cout<<setw(5)<<e<<"  in many "<<setw(13)<<mm<<" matches he/she is also a well behaved"<<setw(5)<<e<<endl;
			cout<<setw(5)<<e<<"  student and holds a good moral and relegeous character"<<setw(10)<<e<<endl;
			cout<<setw(5)<<e<<"  Signature of Principle______________"<<setw(28)<<e<<endl;
		
			cout<<setw(5);
			for(int q=1;q<=67;q++)
			{
				
				cout<<e;
			}
		}
		
	}
}

		else if (v=="class 8")
	{
			
		cout<<"Enter the Roll Number of student\n";
		cin>>bb;
		cout<<"Enter the type of sports (foot ball , cricket etc)"<<endl;
		cin.ignore();
		getline(cin,mm);
		
		system("cls");
		
		
		cc=bb-1;
		for(int j=0;j<k11;j++)
		
	{
			
		
		if(j==cc)
		{
			cout<<setw(5);
			for(int q=1;q<=67;q++)
			{
				
				cout<<e;
			}
			cout<<endl<<setw(5)<<e<<setw(45)<<" A B C   A C A D E M Y "<<setw(21)<<e<<endl; 
			cout<<setw(5)<<e;
			for(int q=1;q<=65;q++)
			{
				
			cout<<f;
			}
			cout<<e;
			cout<<endl<<setw(5)<<e<<"  Name:"<<setw(19)<<c11[j]<<"   Father`s Name:"<<setw(20)<<d11[j]<<setw(3)<<e<<endl; 
			cout<<setw(5)<<e<<"  Is the student of class VIII our school and participated "<<setw(7)<<e<<endl;
			cout<<setw(5)<<e<<"  in many "<<setw(13)<<mm<<" matches he/she is also a well behaved"<<setw(5)<<e<<endl;
			cout<<setw(5)<<e<<"  student and holds a good moral and relegeous character"<<setw(10)<<e<<endl;
			cout<<setw(5)<<e<<"  Signature of Principle______________"<<setw(28)<<e<<endl;
		
			cout<<setw(5);
			for(int q=1;q<=67;q++)
			{
				
				cout<<e;
			}
		}
		
	}
}

		else if (v=="class 9")
	{
			
		cout<<"Enter the Roll Number of student\n";
		cin>>bb;
		cout<<"Enter the type of sports (foot ball , cricket etc)"<<endl;
		cin.ignore();
		getline(cin,mm);
		
		system("cls");
		
		
		cc=bb-1;
		for(int j=0;j<k12;j++)
		
	{
			
		
		if(j==cc)
		{
			cout<<setw(5);
			for(int q=1;q<=67;q++)
			{
				
				cout<<e;
			}
			cout<<endl<<setw(5)<<e<<setw(45)<<" A B C   A C A D E M Y "<<setw(21)<<e<<endl; 
			cout<<setw(5)<<e;
			for(int q=1;q<=65;q++)
			{
				
			cout<<f;
			}
			cout<<e;
			cout<<endl<<setw(5)<<e<<"  Name:"<<setw(19)<<c12[j]<<"   Father`s Name:"<<setw(20)<<d12[j]<<setw(3)<<e<<endl; 
			cout<<setw(5)<<e<<"  Is the student of class IX our school and participated "<<setw(9)<<e<<endl;
			cout<<setw(5)<<e<<"  in many "<<setw(13)<<mm<<" matches he/she is also a well behaved"<<setw(5)<<e<<endl;
			cout<<setw(5)<<e<<"  student and holds a good moral and relegeous character"<<setw(10)<<e<<endl;
			cout<<setw(5)<<e<<"  Signature of Principle______________"<<setw(28)<<e<<endl;
		
			cout<<setw(5);
			for(int q=1;q<=67;q++)
			{
				
				cout<<e;
			}
		}
		
	}
}

	else if (v=="class 10")
{
			
		cout<<"Enter the Roll Number of student\n";
		cin>>bb;
		cout<<"Enter the type of sports (foot ball , cricket etc)"<<endl;
		cin.ignore();
		getline(cin,mm);
		
		system("cls");
		
		
		cc=bb-1;
		for(int j=0;j<k8;j++)
		
	{
			
		
		if(j==cc)
		{
			cout<<setw(5);
			for(int q=1;q<=67;q++)
			{
				
				cout<<e;
			}
			cout<<endl<<setw(5)<<e<<setw(45)<<" A B C   A C A D E M Y "<<setw(21)<<e<<endl; 
			cout<<setw(5)<<e;
			for(int q=1;q<=65;q++)
			{
				
			cout<<f;
			}
			cout<<e;
			cout<<endl<<setw(5)<<e<<"  Name:"<<setw(19)<<c13[j]<<"   Father`s Name:"<<setw(20)<<d13[j]<<setw(3)<<e<<endl; 
			cout<<setw(5)<<e<<"  Is the student of class X our school and participated "<<setw(4)<<e<<endl;
			cout<<setw(5)<<e<<"  in many "<<setw(13)<<mm<<" matches he/she is also a well behaved"<<setw(5)<<e<<endl;
			cout<<setw(5)<<e<<"  student and holds a good moral and relegeous character"<<setw(10)<<e<<endl;
			cout<<setw(5)<<e<<"  Signature of Principle______________"<<setw(28)<<e<<endl;
		
			cout<<setw(5);
			for(int q=1;q<=67;q++)
			{
				
				cout<<e;
			}
		}
		
	}
}
		
		else
	{
			
		cout<<"You have chose an invalid class please choose again\n";
		system("pause");
		system("cls");
		main();
}
	}
	
	void teacher()
	{
		char e=4;
		int cc,bb;
		string mm;
			
		cout<<"Enter Teacher`s code\n";
		cin>>bb;
		cout<<"Enter the working period of teacher"<<endl;
		cin.ignore();
		getline(cin,mm);
		
		system("cls");
		
		
		cc=bb-1;
		for(int j=0;j<kt1;j++)
		
	{
			
		
		if(j==cc)
		{
			cout<<setw(5);
			for(int q=1;q<=67;q++)
			{
				
				cout<<e;
			}
			cout<<endl<<setw(5)<<e<<setw(45)<<" A B C   A C A D E M Y "<<setw(21)<<e<<endl; 
			cout<<setw(5)<<e;
			for(int q=1;q<=65;q++)
			{
				
			cout<<f;
			}
			cout<<e;
			
			cout<<endl<<setw(5)<<e<<"  Name:"<<setw(19)<<t[j]<<setw(31)<<" is the teacher of our school. He/She "<<setw(2)<<e<<endl; 
			cout<<setw(5)<<e<<"  work for"<<setw(9)<<mm<< " designated as the "<<setw(19)<<design[j]<<setw(9)<<e<<endl;
			cout<<setw(5)<<e<<"  He/She is very honest with his/her work and we have no complain"<<setw(1)<<e<<endl;
			cout<<setw(5)<<e<<"  regarding his/her work or attitude "<<setw(29)<<e<<endl;
			cout<<setw(5)<<e<<"  Signature of Principle______________"<<setw(28)<<e<<endl;
		
			cout<<setw(5);
			for(int q=1;q<=67;q++)
			{
				
				cout<<e;
			}
		}
		
		
	}
	
}	
