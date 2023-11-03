#include <ros_ws/node.hpp>

class ExampleClass : public rclcpp::Node
{
    public:
        ExampleClass() : rclcpp::Node('example_node')
        {
            this->create_publisher<>(shared_from_this(), "");
        }
    private:
}


int main(int argc, char** argv)
{
    ExampleClass example_class;

    executor = rclcpp::MultithreadedExecutor();

    executor.add_node(example_class);
    executor.spin();
}