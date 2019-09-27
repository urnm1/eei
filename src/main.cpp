#include <gsl/gsl>

void freemem(gsl::owner<int*> var);

int main(int argc, char* argv[])
{
  auto *i = new int{3};
  return 0;
}

void freemem(gsl::owner<int*> var)
{
  delete var;
}
