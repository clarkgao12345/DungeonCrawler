#ifndef CREATURE_H
#define CREATURE_H
#include <string>

namespace core {
namespace creatures {

// TODO: define Creature class and the its concrete subclasses.
// There is some example code in here, but it can be modified if desired.

/**
 * @brief TODO The Creature class
 */
class Creature
{
public:
  Creature(const std::string &name);

  const std::string& name() const;

private:
  std::string _name;
};

/**
 * @brief TODO The Goblin class
 */
class Goblin
{
public:
  Goblin();
};

/**
 * @brief TODO The Werewolf class
 */
class Werewolf
{
public:
  Werewolf();
};

/**
 * @brief TODO The EvilWizard class
 */
class EvilWizard
{
public:
  EvilWizard();
};

} // namespace creatures
} // namespace core

#endif // CREATURE_H
