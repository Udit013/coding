import java.io.*;
import java.util.Scanner;

public class Copyfile {
    public static void main(String[]args){
        FileReader fr=new FileReader(args[0]);
        char ch,ch2;
        ch=fr.read();
        while(ch!=-1){
            ch2=ch2+(char)ch;
        }
        fr.close();
        FileWriter fw=new FileWriter(args[1]);
        fw.write(ch2);
        fw.close();
    }
}
