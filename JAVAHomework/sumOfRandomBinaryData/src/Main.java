import java.io.FileOutputStream;
import java.io.FileInputStream;
import java.util.Random;

public class Main {
    public static void main(String[] args) {
        try {
            Random random=new Random();
            FileOutputStream output = new FileOutputStream("Exercise17_02.dat");
            for(int i=0;i<100;i++){
                output.write(random.nextInt(100)+1);
            }
            output.close();
        }
        catch (Exception e){
            e.printStackTrace();
        }
        try{
            FileInputStream input=new FileInputStream("Exercise17_02.dat");
            int sumOfValue=0;
            int temp;
            while((temp=input.read())!=-1){
               sumOfValue+= temp;
            }
            System.out.println(sumOfValue);
        }
        catch (Exception e){
            e.printStackTrace();
        }
    }

}
