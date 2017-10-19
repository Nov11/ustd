#include "config.h"

namespace ustd
{

fn println(str s) -> void {
    io::stdout().writeln(s);
}

fn panic() -> void {
    throw PanicInfo{};
}

fn panic(str s) -> void {
    println(s);
    throw PanicInfo{};
}

}
