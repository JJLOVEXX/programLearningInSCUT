import static java.lang.System.exit;
import java.io.*;
import java.io.File;


public class Main {

    public static void main(String[] args) {
        if (args.length != 2) {
            System.out.println("Usage: java fileDivision sourceFile numberOfTargetFile");
            exit(0);
        }

        File sourceFile = new File(args[0]);
        if (!sourceFile.exists()) {
            System.out.println("Source file " + args[0] + " not exist");
            System.exit(0);
        }
        try {
            FileReader read = new FileReader(args[0]);
            BufferedReader br = new BufferedReader(read);
            String row;

            int rowNum = 1;
            int n = Integer.parseInt(args[1]);
            int fileNo = 1;
            FileWriter fw = new FileWriter("C:/Users/ChenLiJian/Desktop/text" + fileNo + ".txt");
            while ((row = br.readLine()) != null) {
                rowNum++;
                fw.append(row + "\r\n");

                if ((rowNum / n) > (fileNo - 1)) {
                    fw.close();
                    fileNo++;
                    fw = new FileWriter("C:/Users/ChenLiJian/Desktop/text" + fileNo + ".txt");
                }
            }
            fw.close();
            System.out.println("rowNum=" + rowNum + ";fileNo=" + fileNo);
        } catch (FileNotFoundException e) {
            e.printStackTrace();
        } catch (IOException e) {
            e.printStackTrace();
        }
    }
}
