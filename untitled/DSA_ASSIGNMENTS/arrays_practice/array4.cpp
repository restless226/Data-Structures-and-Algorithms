//#include<iostream>
//using namespace std;
//void input(int arr[], int s)
//{
//    int n;
//    cout<<"How many elements you want to add in the merged sorted array: "<<endl;
//    cin>>n;
//    int *input = new int[n];
//
//    cout<<"Enter the elements: "<<endl;
//    for(int i=0;i<n;i++)
//    {
//        cin>>input[i];
//    }
//    int temp=0;
//    for(int i=0;i<n;i++)				         //SORTING THE ELEMENTS ENTERED BY THE USER (PART OF P4)
//    {
//        for(int j = i+1;j<n;j++)
//        {
//            if(input[i]>input[j])
//            {
//                temp = input[i];
//                input[i] = input[j];
//                input[j] = temp;
//            }
//        }
//    }
//    int final_array[s+n];
//    int i = 0;
//    int j = 0;
//    int k = 0;
//    while(i<s&&j<n)
//    {
//        if(arr[i]<input[j])
//        {
//            final_array[k] = arr[i];
//            i++;
//            k++;
//        }
//        else if(arr[i]>input[j])
//        {
//            final_array[k] = input[j];
//            j++;
//            k++;
//        }
//    }
//    while(j<n)
//    {
//        final_array[k] = input[j++];
//        k++;
//    }
//    while(i<s)
//    {
//        final_array[k] = arr[i++];
//        k++;
//    }
//
//
//
//    cout<<"Final Merged Sorted array: "<<endl;
//    for(int i=0;i<(s+n);i++)
//    {
//        cout<<final_array[i]<<" ";
//    }
//}