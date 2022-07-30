class Person {
    int id;
    String name;

    Person(int id, String name) {
        this.id = id;
        this.name = name;
    }
}

class Emp extends Person {
    float salary;

    Emp(int id, String name, float salary) {
        super(id, name);
        this.salary = salary;
    }

    final void display() {
        System.out.println(id + " " + name + " " + salary);
    }
}

class TestKeywords {
    public static void main(String[] args) {
        Emp e1 = new Emp(13, "Breach", 56000f);
        e1.display();
    }
}
