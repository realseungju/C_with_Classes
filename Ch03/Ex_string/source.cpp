#include <iostream>
#include <string>
using namespace std;

int main()
{
    string song("Falling in love with you");
    string elvis("Elvis Presley");
    string singer;

    cout << song + "�� �θ� ������";
    cout << "(��Ʈ : ó�� �� ���ڴ� " << elvis[0] << elvis[1] << ")?";

    getline(cin, singer);
    if(singer == elvis)
      cout << "�¾ҽ��ϴ�.";
    else
      cout << "Ʋ�Ƚ��ϴ�." + elvis + "�Դϴ�." << endl;
}