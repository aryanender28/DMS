

create table Emp( Emp_no number NOT NULL PRIMARY KEY, E_name varchar2(10), Dept_no 
number, Dept_name varchar2(10), Job_id number, Salary number); 
create table Dept(Dept_no number(3) not null primary key, Emp_no number(3), Dept_name 
varchar2(10), Location varchar2(20), foreign key(Emp_no) references Emp(Emp_no));

create table student(Roll_no NUMBER NOT NULL PRIMARY KEY, Stud_name VARCHAR2(20), Percentage NUMBER CHECK(Percentage>=100));

alter table student add city varchar(20);

alter table student modify stud_name varchar(10);

drop table Emp;
create table dept1(deptno number not null primary key, deptname varchar2(10), Location 
varchar2(10),Job_id number);
create table Emp1(Empno number(3) not null primary key,deptno number(3), Empname varchar2(10), Salary 
number, Phno number(10),foreign key(deptno) references dept1(deptno));

create table Emp2(Emp_no number, E_name varchar2(10),Dept_no number, Dept_name varchar2(10),Job_id number, Salary number, hiredate date);

insert into Emp2 Values (101,'Aryan',201,'Production',401,45000,'15-Aug-2021');
insert into Emp2 Values (102,'Ajit',202,'Sales',601,25000,'15-Aug-2021');
insert into Emp2 Values (103,'Athang',203,'Production',401,35000,'15-Aug-2021');
insert into Emp2 Values (104,'Ashish',204,'Sales',601,150,'15-Aug-2021');
insert into Emp2 Values (105,'Aryan',205,'Production',401,75000,'15-Aug-2021');

select*from Emp2;

select E_name,(Salary*20) as Incremented_Salary from Emp2;
select E_name, Emp_no from Emp2 where Salary <=50000 and Salary>=25000;

select next_day(sysdate,'thur')from dual; 
Create view dept_view as select dept_no,dept_name,location from dept;

select*from emp2 where salary>60000;
Select min(salary) from emp e, dept d where e.emp_no=d.emp_no group by emp_no;

 select*from emp2 order by E_name  asc;
select E_name,job_id from emp2 where job_id<>401;



Select E_name from emp2 where E_name LIKE '    '; 



create or replace function fact (n number) return number is
i number(3);
f number:=1;
begin
for i in 1..n
loop
f:=f*i;
end loop;
return(f);
end fact;
/

declare
f number(10);
n number(3):=:n;
begin
f:=fact(n);
dbms_output.put_line('factorial='||f);
end;
/ 
