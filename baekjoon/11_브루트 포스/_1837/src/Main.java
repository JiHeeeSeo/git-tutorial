import java.math.BigInteger;
import java.util.ArrayList;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {

        // 두 수 입력
        Scanner scanner = new Scanner(System.in);

        BigInteger pq, k;
        pq = scanner.nextBigInteger();
        k = scanner.nextBigInteger();

        // 소수 넣을 배열 선언
        ArrayList<BigInteger> prime = new ArrayList<>();

        // pq까지 소수 가지고 있는 배열 작성
        for(BigInteger i = new BigInteger("2"); i.compareTo(pq)<=0; i.add(BigInteger.ONE)){
            if(i.compareTo(new BigInteger("2")) == 0||i.compareTo(new BigInteger("3"))==0){
                prime.add(i);
                continue;
            }

            BigInteger cn = i.sqrt();
            int check = 0;
            for(BigInteger j = cn; j.compareTo(new BigInteger("1"))>0; j.subtract(BigInteger.ONE)){
                if(i.remainder(j).compareTo(new BigInteger("0")) == 0){
                    check++;
                    break;
                }
            }

            if(check == 0){
                prime.add(i);
            }
        }

        //System.out.println(prime);

        // 배열 2개끼리 반복문 실행(k전까지)
        // 인덱스로 접근할거에용
        BigInteger p, q;
        int size = prime.size();
        for(int i = 0; i < size; i++){
            for(int j = 0; j < size; j++){
                p = prime.get(i);
                q = prime.get(j);
                //System.out.println("p: "+p+ ", q:"+q);

                // pq를 곱해서 같으면 이제 k 체크하고 반복문 종료
                if (p.multiply(q) == pq) {
                    if(p.compareTo(k) == -1){
                        System.out.println("BAD "+p);
                        return;
                    }else{
                        System.out.println("GOOD");
                        return;
                    }
                }
            }
        }
    }
}
