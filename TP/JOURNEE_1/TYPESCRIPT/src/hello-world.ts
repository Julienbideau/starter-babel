import { Student } from "./student";

export let student = new Student();
student.setAge(10);
student.setName("Armand");
export let y = { ...{ some: "value" } };
console.log(` name : ${student.getName()}, age:  ${student.getAge()}`);
