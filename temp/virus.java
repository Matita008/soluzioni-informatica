import java.lang.*;

public class virus {
  public static String s1 = "12345678";
  public static String s2 = "12345678";
  public static String s3 = "12345678";
  public static String s4 = "12345678";
  public static int virusLength = 3;
  public static ArrayList<String> substr = new ArrayList<>();
  public static HashMap<String,Integer> ck = new HashMap<>();
  public static int endFl = 0;
  public static Object flLock = new Object();
  public static void thread1(){
    int dist = virusLength<4?1:virusLength/2-1;
    boolean flag = false;
    for(int i=dist; i<s1.length();i+=flag?virusLength:dist) {
      substr.append(s1.substring(i,i+virusLength));
      flag=~flag;
    }
    synchronized(flLock) {
      endFl+=1;
    }
  }
  public static void thread2(){
  	int i=0;
    while(endFl&1 != 1) {
      if(substr.length()<=i) continue;
      String cur=substr.get(i);
      
    }
  }
}
