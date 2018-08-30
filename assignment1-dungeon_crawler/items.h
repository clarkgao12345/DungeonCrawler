#ifndef ITEMS_H
#define ITEMS_H

namespace core {
namespace items {

/**
 * @brief TODO The Item class
 */
class Item
{
public:
  Item();
  virtual ~Item() = default;
};

/**
 * @brief TODO The Weapon class
 */
class Weapon : public Item
{
public:
  Weapon();
};

/**
 * @brief TODO The Fists class
 */
class Fists : public Weapon
{
public:
  Fists();
};

/**
 * @brief TODO The ShortSword class
 */
class ShortSword : public Weapon
{
public:
  ShortSword();
};

/**
 * @brief TODO The BattleAxe class
 */
class BattleAxe : public Weapon
{
public:
  BattleAxe();
};

/**
 * @brief TODO The WizardsStaff class
 */
class WizardsStaff : public Weapon
{
public:
  WizardsStaff();
};

/**
 * @brief TODO The MagicWand class
 */
class MagicWand : public Weapon
{
public:
  MagicWand();
};

/**
 * @brief TODO The ConsumableItem class
 */
class ConsumableItem : public Item
{
public:
  ConsumableItem();
};

/**
 * @brief TODO The HealthPotion class
 */
class HealthPotion : public ConsumableItem
{
public:
  HealthPotion();
};

/**
 * @brief TODO The AcidFlask class
 */
class AcidFlask : public ConsumableItem
{
public:
  AcidFlask();
};

/**
 * @brief TODO The Teleporter class
 */
class Teleporter : public ConsumableItem
{
public:
  Teleporter();
};

class Enchantment
{
public:
  Enchantment();
};

/**
 * @brief TODO The FlameEnchantment class
 */
class FlameEnchantment : public Enchantment
{
public:
  FlameEnchantment();
};

/**
 * @brief TODO The ElectricityEnchantment class
 */
class ElectricityEnchantment : public Enchantment
{
public:
  ElectricityEnchantment();
};

/**
 * @brief TODO The HealingEnchantment class
 */
class HealingEnchantment : public Enchantment
{
public:
  HealingEnchantment();
};

/**
 * @brief TODO The VampirismEnchantment class
 */
class VampirismEnchantment : public Enchantment
{
public:
  VampirismEnchantment();
};

} // namespace items
} // namespace core


#endif // ITEMS_H
