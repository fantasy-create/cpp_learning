/*
#include<iostream>
#include<thread>
#include<mutex>
using namespace std;

mutex mtx;
int a = 0;

void cmp()
{
    for(int i = 0; i < 100; i++)
    {
        lock_guard<mutex> lg(mtx);
        a += 1;
    }
    return;
}

int main()
{

    thread thread1(cmp);
    thread thread2(cmp);

    thread1.join();
    thread2.join();

    cout << a << endl;

    return 0;
}
*/

// 异步并发
/*

#include<iostream>
#include<thread>
#include<mutex>
#include<future>

using namespace std;

void func(promise<int> f)
{
    f.set_value(1000); // 将值 1000 设置为 promise 对象 f 的结果
}

// promise<int> f 创建一个 promise 对象 f，该对象用于在未来某个时间点存储一个 int 类型的结果。
int main()
{
    promise<int> f;
    auto future_result = f.get_future();
    
    thread t1(func, ref(f));

    t1.join();

    cout << future_result.get() << endl;

    return 0;
}



// packaged_task<int()> task(func) 创建一个 packaged_task 对象 task，
// 该对象包装了一个无参数、返回 int 类型的函数 func。
/*
int main()
{
    packaged_task<int()> task(func);
    auto future_result = task.get_future();

    thread t1(move(task)); // 将 task 移动到线程 t1 中执行 func 函数
    cout << func() << endl;
    t1.join();
    cout << future_result.get() << endl;

    return 0;
}

*/

//async(launch::async, func) 以异步方式执行 func 函数，并返回一个 future 对象 future_result。
//这个 future 对象可以用来获取 func 函数的返回值。
//当调用 future_result.get() 时，如果 func 函数还没有执行完毕，get() 会阻塞当前线程，直到 func 函数执行完成并返回结果。
/*
int main()
{
    future<int> future_result = async(launch::async, func);
    cout << func() << endl;

    cout << future_result.get() << endl;

    return 0;
}
*/

#include<iostream>
#include<thread>
#include<mutex>
#include<atomic>

using namespace std;

atomic<int> shared_data(0);

void func()
{
    for(int i = 0; i < 100000; i++)
    {
        shared_data++;
    }
}

int main()
{
    thread t1(func);
    thread t2(func);
    t1.join();
    t2.join();
    cout << "shared_data: " << shared_data << endl; 

    return 0;
}