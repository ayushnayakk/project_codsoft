          #include <iostream>
          #include <vector>
          #include <algorithm>

          struct Task {
              std::string description;
              bool completed;
          };

          class TodoList {
          private:
              std::vector<Task> tasks;

          public:
              void addTask(const std::string& description) {
                  Task newTask = {description, false};
                  tasks.push_back(newTask);
                  std::cout << "Task added: " << description << std::endl;
              }

              void markTaskAsCompleted(int index) {
                  if (index >= 0 && index < tasks.size()) {
                      tasks[index].completed = true;
                      std::cout << "Task marked as completed: " << tasks[index].description << std::endl;
                  } else {
                      std::cout << "Invalid task index." << std::endl;
                  }
              }

              void removeCompletedTasks() {
                  tasks.erase(std::remove_if(tasks.begin(), tasks.end(), [](const Task& task) {
                      return task.completed;
                  }), tasks.end());
                  std::cout << "Completed tasks removed." << std::endl;
              }

              void displayTasks() const {
                  std::cout << "Todo List:" << std::endl;
                  for (size_t i = 0; i < tasks.size(); ++i) {
                      std::cout << "[" << i << "] ";
                      if (tasks[i].completed) {
                          std::cout << "[Done] ";
                      }
                      std::cout << tasks[i].description << std::endl;
                  }
              }
          };

          int main() {
              TodoList todoList;

              while (true) {
                  std::cout << "Menu:" << std::endl;
                  std::cout << "1. Add Task" << std::endl;
                  std::cout << "2. Mark Task as Completed" << std::endl;
                  std::cout << "3. Remove Completed Tasks" << std::endl;
                  std::cout << "4. Display Tasks" << std::endl;
                  std::cout << "5. Exit" << std::endl;
                  std::cout << "Enter your choice: ";

                  int choice;
                  std::cin >> choice;

                  switch (choice) {
                      case 1: {
                          std::string description;
                          std::cout << "Enter task description: ";
                          std::cin.ignore();
                          std::getline(std::cin, description);
                          todoList.addTask(description);
                          break;
                      }
                      case 2: {
                          int index;
                          std::cout << "Enter task index to mark as completed: ";
                          std::cin >> index;
                          todoList.markTaskAsCompleted(index);
                          break;
                      }
                      case 3:
                          todoList.removeCompletedTasks();
                          break;
                      case 4:
                          todoList.displayTasks();
                          break;
                      case 5:
                          std::cout << "Exiting program. Goodbye!" << std::endl;
                          return 0;
                      default:
                          std::cout << "Invalid choice. Please try again." << std::endl;
                  }
              }

              return 0;
          }
