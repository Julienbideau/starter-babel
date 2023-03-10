export class Student {
    private age = 10;
    private name=  "";
    getAge = () => this.age;
    setAge = (newVal: number) => { this.age = newVal; }
    getName = () => this.name;
    setName = (newName: string) => this.name = newName;
}
