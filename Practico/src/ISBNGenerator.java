import java.util.Random;

public class ISBNGenerator {
    Random newISBN = new Random();

    public ISBNGenerator() {
    }

    public int ISBNGeneration() {
        int var1 = this.newISBN.nextInt();
        if (var1 < 0) {
            var1 *= -1;
        }

        return var1;
    }
}