package DAO;

import domain.Customer;

import java.io.*;
import java.io.IOException;

public class CustomerDAO {

    File file=new File("C:/Users/ChenLiJian/Desktop/Bank");
    public CustomerDAO() {

    }

    public File getFile(){
        return file;
    }
    public boolean isFileExist(File file) {
        if (file.exists()) {
            return true;
        } else {
            return false;
        }
    }


    public void randomRead(File file, int pointer) {
        try {
            /*
             * model各个参数详解
             * r 代表以只读方式打开指定文件
             * rw 以读写方式打开指定文件
             * rws 读写方式打开，并对内容或元数据都同步写入底层存储设备
             * rwd 读写方式打开，对文件内容的更新同步更新至底层存储设备
             */
            RandomAccessFile raf = new RandomAccessFile(file, "r");
           /* //获取RandomAccessFile对象文件指针的位置，初始位置是0
            System.out.println("RandomAccessFile文件指针的初始位置:" + raf.getFilePointer());*/
            raf.seek(pointer);//移动文件指针位置
            byte[] buff = new byte[1024];
            //用于保存实际读取的字节数
            int hasRead;
            //循环读取
            while ((hasRead = raf.read(buff)) > 0) {
                //打印读取的内容,并将字节转为字符串输入
                System.out.println(new String(buff, 0, hasRead));
            }
        } catch (Exception e) {
            e.printStackTrace();
        }
    }

    public void randomWrite(File file, Customer customer){
            try {
                /*以读写的方式建立一个RandomAccessFile对象*/
                RandomAccessFile raf = new RandomAccessFile(file, "rw");
                //将记录指针移动到文件最后
                raf.seek(raf.length());
                raf.write(customer.getFirstName().getBytes());
                char c = ',';
                raf.seek(raf.length());
                raf.write(c);
                raf.seek(raf.length());
                raf.write(customer.getLastName().getBytes());
                c = ' ';
                raf.seek(raf.length());
                raf.write(c);
            } catch (IOException e) {
                e.printStackTrace();
            }
        }
}
