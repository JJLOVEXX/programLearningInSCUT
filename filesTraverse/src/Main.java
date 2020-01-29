import java.io.*;

public class Main {

    public static void
    traverse(File directory) throws IOException {

        if (!directory.exists()) {
            throw new IllegalArgumentException("The directory is not existent.");
        } else if (!directory.isDirectory()) {
            throw new IllegalArgumentException("The directory is not a directory.");
        }

        File[] files = directory.listFiles();
        if (files != null && files.length > 0) {
            for (File file : files
                    ) {
                if (!file.isDirectory()) {
                    System.out.println(file.getAbsolutePath());
                } else {
                    System.out.println(file.getAbsolutePath());
                    traverse(file);
                }
            }
        }

    }

    public static void main(String[] args) throws IOException {
        traverse(new File("D:\\Academic\\ICBC-IBM Competition"));
    }
}
