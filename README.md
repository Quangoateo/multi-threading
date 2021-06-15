# MULTIPLE THREADING IN PRACTICE

## DESCRIPTION

This repo shows my practice dealing with multi-threaded problems.

&nbsp;

## AUTHOR & LICENSE

Author: Thanh Trung Nguyen

- Email: thanh.it1995@gmail.com
- Facebook: <https://www.facebook.com/thanh.it95>

This repo is licensed under the [3-Clause BSD License](LICENSE.txt).

&nbsp;

## REPO STRUCTURE

- ```cpp-pthreads```: C++ POSIX threads.

&nbsp;

---

&nbsp;

## ARTICLES

### WHY MULTITHREADING

Multithreaded programs can improve performance compared to traditional simple programs (which use only a single thread).

Multithreading is used as an underlying technique in various fields:

- Web browsers (Chrome, Edge, Firefox...).
- Web servers.
- Graphic editors (Adobe Photoshop, Corel Draw...).
- Computer games.
- Database management systems.
- Networking programming.
- Video encoders.
- And more...

Benefits of multithreading:

- Improving application responsiveness.
  - Any program in which many activities are not dependent upon each other can be redesigned so that each activity is defined as a thread. For example, the user of a multithreaded GUI does not have to wait for one activity to complete before starting another.

- Using multiprocessors efficiently.
  - Typically, applications that express concurrency requirements with threads need not take into account the number of available processors. The performance of the application improves transparently with additional processors.
  - Numerical algorithms and applications with a high degree of parallelism, such as matrix multiplications, can run much faster when implemented with threads on a multiprocessor.

- Improving throughput.
  - Many concurrent compute operations and I/O requests within a single process.

- Program structure simplification.
  - Threads can be used to simplify the structure of complex applications, such as server-class and multimedia applications. Simple routines can be written for each activity, making complex programs easier to design and code, and more adaptive to a wide variation in user demands.

- Using fewer system resources.
  - Threads impose minimal impact on system resources. Threads require less overhead to create, maintain, and manage than a traditional process.

- Better communication.
  - Thread synchronization functions can be used to provide enhanced process-to-process communication.
  - In addition, sharing large amounts of data through separate threads of execution within the same address space provides extremely high-bandwidth, low-latency communication between separate tasks within an application.

In fact, multithreading is extremely important in the current software industry. It lets you do concurrency. It solves asynchronous problems.

<sub>Reference: Oracle Documentation Home, Multithreaded Programming Guide, Benefiting From Multithreading.</sub>

&nbsp;

---

&nbsp;

## REFERENCES

Please read [references.md](references.md).
