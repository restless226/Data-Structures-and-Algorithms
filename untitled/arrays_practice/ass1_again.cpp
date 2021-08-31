//#include <iostream>
//#include <string>
//using namespace std;
//
//struct stud
//{
//    int number;
//    string name;
//    float marks[5];
//    float total=0;
//    float sgpa;
//};
//
//class student
//{
//public:
//    int i=0 , j=0 , topper ;
//    int total;
//    student(int e)
//    {
//        total = e;
//    }
//
//    struct stud s[50];
//
//    void input()
//    {
//        for( i =0;i<=total-1;i++)
//        {
//            cout << "\nEnter student name" << endl;
//            getline(cin,s[i].name);
//            cout << "Enter roll number" << endl;
//            cin >> s[i].number;
//            cout<<"Enter the grade points of 5 subjects"<<endl;
//            for(j=0 ; j <=4 ; j++)
//            {
//                cin>>s[i].marks[j];
//            }
//            cin.ignore();
//        }
//    }
//
//    void calc()
//    {
//        float max;
//        for (i=0 ; i<=total-1;i++)
//        {
//            s[i].total=0;
//            for(j=0 ; j <=4 ; j++)
//            {
//                s[i].total=s[i].total + s[i].marks[j];
//            }
//
//            s[i].sgpa = s[i].total/5;
//
//            if (max < s[i].sgpa)
//            {
//                max = s[i].sgpa;
//                topper = i;
//            }
//
//
//        }
//    }
//
//
//    void disp()
//    {
//        cout << "Name\t" << "Roll number\t" <<"sgpa\t" <<endl;
//
//        for (i = 0; i <= total-1; i++)
//        {
//            cout << s[i].name << "\t" << s[i].number << "\t\t" << s[i].sgpa<< endl;
//        }
//        cout<<endl;
//    }
//
//    void bubble_sort()
//    {
//        stud temp;
//        bool swapped = true;
//
//        while(swapped)
//        {
//            swapped = false;
//            for (j = 0; j < total - 1; j++)
//            {
//                if ((s[j].number) > (s[j + 1].number))
//                {
//                    temp = s[j];
//                    s[j] = s[j + 1];
//                    s[j + 1] = temp;
//                    swapped = true;
//                }
//            }
//
//            disp();
//        }
//    }
//
//    void insertion_sort()
//    {
//        stud temp;
//        for(i=1;i<total;i++)
//        {
//            temp = s[i];
//            for(j=i;j>=0;j--)
//            {
//                if(s[j-1].name.compare(temp.name)>0)
//                {
//                    s[j] = s[j-1];
//                }else{
//                    break;
//                }
//            }
//            s[j] = temp;
//
//            disp();
//        }
//    }
//
//    int swap(int left , int right)
//    {
//        i=left-1 , j ;
//        stud temp;
//
//        float pivot = s[right].sgpa;
//
//        for(j=left;j<right;j++)
//        {
//            if(s[j].sgpa<pivot)
//            {
//                i++;
//                temp = s[j];
//                s[j] = s[i];
//                s[i] = temp;
//            }
//        }
//        temp = s[right];
//        s[right] = s[i+1];
//        s[i+1] = temp;
//
//        return i+1;
//    }
//
//    void quicksort(int left , int right)
//    {
//        if(left<right)
//        {
//            int part = swap(left , right);
//            quicksort(left , part-1);
//            quicksort(part+1 , right);
//        }
//
//
//    }
//
//    void linear_srch()
//    {
//        float srch;
//        cout<<"Enter the sgpa to be searched"<<endl;
//        cin>>srch;
//
//        cout << "Name\t Roll number\tTotal\tsgpa\t"<< endl;
//
//        for(i=0;i<=total;i++)
//        {
//            if(srch == s[i].sgpa)
//            {
//                cout << "Name :- " << s[i].name << ", Roll number :-  " << s[i].number << ", sgpa :- " << s[i].sgpa<< endl;
//
//            }
//        }
//    }
//
//    void bin_srch()
//    {
//        insertion_sort();
//
//        string srch;
//        cout<<"Enter the name to be searched"<<endl;
//        cin>>srch;
//
//        int end = total -1 , beg = 0, mid = (end + beg) / 2;
//
//        while(beg<=end)
//        {
//
//            if(srch.compare(s[mid].name)>0)
//            {
//                beg = mid+1;
//
//            }
//
//            if(srch.compare(s[mid].name)<0)
//            {
//                end = mid-1;
//            }
//
//            if(srch.compare(s[mid].name)==0)
//            {
//                cout << "Name :- " << s[mid].name << ", Roll number :-  " << s[mid].number << ", sgpa :- " << s[mid].sgpa
//                     << endl;
//                break;
//            }
//
//            if(beg>end)
//            {
//                cout<<"Name not found ";
//                break;
//            }
//
//            mid = (end+beg)/2;
//
//        }
//    }
//
//};
//
//int main()
//{
//    int ini_studs , ch;
//    cout<<"Enter no. of entries"<<endl;
//    cin>>ini_studs;
//    cin.ignore();
//
//    while(ini_studs<1)
//    {
//        cin>>ini_studs;
//    }
//
//    student obj(ini_studs);
//    obj.input();
//    obj.calc();
//    obj.disp();
//
//    cout<<"Press 1) Sort roll numbers. 2) Sort alphabetically, 3) Sort with sgpa. 4) Search student with sgpa. 5) Search student with name. 9) Terminate"<<endl;
//
//    bool bln=true;
//
//
//    while(bln)
//    {
//        cin>>ch;
//        cin.ignore();
//
//        switch (ch)
//        {
//            case 1:
//                obj.bubble_sort();
//                obj.calc();
//                obj.disp();
//                break;
//            case 2:
//                obj.insertion_sort();
//                obj.disp();
//                break;
//            case 3:
//                obj.quicksort(0,obj.total-1);
//                obj.disp();
//                break;
//            case 4:
//                obj.linear_srch();
//            case 5:
//                obj.bin_srch();
//                break;
//            case 9:
//                bln = false;
//                break;
//            default:
//                break;
//        }
//    }
//}