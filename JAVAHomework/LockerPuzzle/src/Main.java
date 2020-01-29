public class Main {

    public static void main(String[] args) {
        boolean []lockers=new boolean[100];
        for(int i=0;i<100;i++){
            lockers[i]=false;
        }
        for(int m =1;m<=100;m++){
            for(int n =m;n<=100;n+=m){
                lockers[n-1]=!lockers[n-1];
            }
        }
        for(int i=0;i<100;i++){
            if(lockers[i]==true){
                System.out.println(i+1+" ");
            }
        }
    }
}
