import java.util.*;
class bubblesort{
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter the length of array: ");
        int n=sc.nextInt();
        int arr[]=new int[n];
        System.out.println("Enter array: ");
        for(int i=0;i<n;i++)
        {
            arr[i]=sc.nextInt();
        }

        sort s=new sort();
        s.bubble_sort(arr,n);
        for(int i=0;i<n;i++)
        {
            System.out.print(arr[i]+" ");
        }
    }
}

class sort{
    public void bubble_sort(int arr[],int n)
    {
        for(int i=0;i<n-1;i++)
        {
           boolean flag=false;
            for(int j=0;j<n-i-1;j++)
            {
                if(arr[j]>arr[j+1]){
                    flag=true;
                    int temp=arr[j];
                    arr[j]=arr[j+1];
                    arr[j+1]=temp;
                }
            }
            if(!false)
                return;
        }
        return;
    }
}