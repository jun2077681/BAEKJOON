import java.util.Scanner;
import java.util.Arrays;

public class Main {
    public static void main(String[] args) {
        int N;
        Scanner Sc=new Scanner(System.in);
        N=Sc.nextInt();
        int[] minutes=new int[N];

        for(int i=0;i<N;i++) {
            minutes[i]=Sc.nextInt();
        }
        Arrays.sort(minutes);
        int answer=0;
        for(int i=0;i<N;i++) {
            answer=answer+(i+1)*minutes[N-i-1];
        }
        System.out.println(answer);
    }
}

