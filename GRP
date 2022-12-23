create table Emp( Emp_no number NOT NULL PRIMARY KEY, E_name varchar2(10), Dept_no 
number, Dept_name varchar2(10), Job_id number, Salary number); 
create table Dept(Dept_no number(3) not null primary key, Emp_no number(3), Dept_name 
varchar2(10), Location varchar2(20), foreign key(Emp_no) references Emp(Emp_no));

create table student(Roll_no NUMBER NOT NULL PRIMARY KEY, Stud_name VARCHAR2(20), Percentage NUMBER CHECK(Percentage>=100));

alter table student add city varchar(20);

alter table student modify stud_name varchar(10);


create table dept1(deptno number not null primary key, deptname varchar2(10), Location 
varchar2(10),Job_id number);
create table Emp1(Empno number(3) not null primary key,deptno number(3), Empname varchar2(10), Salary 
number, Phno number(10),foreign key(deptno) references dept1(deptno));

