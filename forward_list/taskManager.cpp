#include <iostream>
#include <forward_list>
#include <vector>
#include <utility>

class TaskManager{
public:
    std::vector<std::forward_list<std::string>> tasks;
    
    TaskManager(int priorety) : tasks(priorety){}
    
    void addTask(int priority, std::string taskName){
        if(priority < 0 || priority >= tasks.size()){
            std::cerr<<"invalid priorety";
            return;
        }
        tasks[priority].push_front(taskName);
    }
    
    std::string getNextTask(){
        auto it = tasks.begin();
        for(; it != tasks.end(); it++){
            if(!it->empty()){
                std::string bestTask = it->front();
                it->pop_front();
                return bestTask;
            }
        }
        return "";
    }
    
    void removeTask(int priority, std::string &taskName){
        if(priority < 0 || priority > tasks.size()){
            std::cerr<<"invalid priorety";
            return;
        }
        auto it = tasks[priority].begin();
        auto prev = tasks[priority].before_begin();
        while(it != tasks[priority].end()){
            if(*it == taskName){
                it = tasks[priority].erase_after(prev);
            }
            else{
                it++;
                prev++;
            }
        }
    }
    
    void printAllTasks(){
        for(int i = 0; i < tasks.size(); i++){
            auto it = tasks[i].begin();
            for(; it != tasks[i].end(); it++){
                std::cout<<*it<<std::endl;
            }
            std::cout<<std::endl;
        }
    }
};

int main()
{
    TaskManager tm(3); 
    tm.addTask(0, "Fix critical bug");
    tm.addTask(2, "Update documentation");
    tm.addTask(0, "Deploy to production");
    tm.addTask(1, "Review pull request");
    std::string task = tm.getNextTask();
    std::cout<<task<<std::endl;
    tm.printAllTasks();

    return 0;
}