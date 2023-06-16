#include <iostream>
#include <list>
class Card {
    public:
    int AttackDmg;
    int Speed;
    int Happiness;
    std::string Effects;
    int EffectAmplifier;
    int DefenceMultiplier;
    std::string Tag;
};
class CardMerge {
    public:
    Card Card1;
    Card Card2;
    char * Tag;
    private:
    std::string Effect1 = Card1.Effects;
    std::string Effect2 = Card2.Effects;
    int AttackDmg = (Card1.AttackDmg + Card2.AttackDmg) / 2;
    int Speed = (Card1.Speed + Card2.Speed) / 2;
    int Happiness = (Card1.Happiness + Card2.Happiness) / 2;
    int EffectAmplifier = (Card1.EffectAmplifier + Card2.EffectAmplifier) / 2;
    int DefenceMultiplier = (Card1.DefenceMultiplier + Card2.DefenceMultiplier) / 2;
};
Card Cat{10, 10, 10, "Zoom", 1, 100, "Cat"};
Card WaterCat{40, 60, 70, "Zoom", 5, 150, "Water Cat"};
Card WindCat{10, 80, 90, "Zoom", 5, 100, "Wind Cat"};
Card FireCat{35, 20, 60, "Zoom", 5, 110, "Fire Cat"};
Card EarthCat{10, 20, 60, "Zoom", 5, 70, "Earth Cat"};
Card LightningCat{25, 90, 70, "Zoom", 5, 120, "Lightning Cat"};
Card VelocityCat{20, 120, 50, "Zoom", 5, 90, "Velocity Cat"};
Card NeonCat{30, 90, 90, "Zoom", 5, 130, "Neon Cat"};
Card MagicCat{10, 80, 99, "Zoom", 5, 80, "Magic Cat"};
Card LightCat{45, 99, 99 , "Zoom", 5, 150, "Light Cat"};
Card DarkCat{50, 70, 70, "Zoom", 5, 90, "Dark Cat"};
CardMerge HurricaneCat{WaterCat, WindCat, "Hurricane Cat"};
CardMerge ConvectionCat{WaterCat, FireCat, "Convection Cat"};
CardMerge PlantCat{WaterCat, EarthCat, "Plant Cat"};
CardMerge ExplosionCat{WaterCat, LightningCat, "Explosion Cat"};
CardMerge CurrentCat{WaterCat, VelocityCat, "Current Cat"};
CardMerge GlowingWaterCat{WaterCat, NeonCat, "Depth Cat"};
CardMerge SeaSerpentCat{WaterCat, MagicCat, "Sea Serpent Cat"};
CardMerge BlindingWaterCat{WaterCat, LightCat, "Blinding Water Cat"};
CardMerge MurkyDepthsCat{WaterCat, DarkCat, "Murky Depths Cat"};
CardMerge FireTornadoCat{WindCat, FireCat, "Fire Tornado Cat"};
CardMerge SandstormCat{WindCat, EarthCat, "Sandstorm Cat"};
CardMerge ChargeCat{WindCat, LightningCat, "Charge Cat"};
CardMerge CompressedAirCat{WindCat, VelocityCat, "Compressed Air Cat"};
CardMerge GlowCat{WindCat, NeonCat, "Glow Cat"};
CardMerge MagicalWindCat{WindCat, MagicCat, "Magical Wind Cat"};
CardMerge LightMistCat{WindCat, LightCat, "Light Mist Cat"};
CardMerge DarkMistCat{WindCat, DarkCat, "Dark Mist Cat"};
CardMerge LavaCat{FireCat, EarthCat, "Lava Cat"};
CardMerge EfireCat{FireCat, LightningCat, "EFire Cat"};
CardMerge RagingFireCat{FireCat, VelocityCat, "Raging Fire Cat"};
CardMerge SunCat{FireCat, NeonCat, "Sun Cat"};
CardMerge BlueFlamesCat{FireCat, MagicCat, "Blue Flames Cat"};
CardMerge BlackFlamesCat{FireCat, DarkCat, "Black Flames Cat"};
CardMerge WhiteFlamesCat{FireCat, LightCat, "White Flames Cat"};
CardMerge CharredCat{EarthCat, LightningCat, "Charred Cat"};
CardMerge SandWormCat{EarthCat, VelocityCat, "Sand Worm Cat"};
CardMerge GlowingNatureCat{EarthCat, NeonCat, "Glowing Nature Cat"};
CardMerge MagicalNatureCat{EarthCat, MagicCat, "Magical Nature Cat"};
CardMerge WhiteDwarfCat{EarthCat, LightCat, "White Dwarf Cat"};
CardMerge BlackDwarfCat{EarthCat, DarkCat, "Black Dwarf Cat"};
CardMerge GodlySpeedCat{LightningCat, VelocityCat, "Godly Speed Cat"};
CardMerge BlindingLightsCat{LightningCat, NeonCat, "Blinding Lights Cat"};
CardMerge MagicalThunderCat{LightningCat, MagicCat, "Magical Thunder Cat"};
CardMerge ShockCat{LightningCat, LightCat, "Shock Cat"};
CardMerge StormyCat{LightningCat, DarkCat, "Stormy Cat"};
CardMerge SpeedingLightCat{NeonCat, VelocityCat, "Speeding Light Cat"};
CardMerge TeleportationCat{VelocityCat, MagicCat, "Teleportation Cat"};
CardMerge FlashCat{VelocityCat, LightCat, "Flash Cat"};
CardMerge SmogCat{VelocityCat, DarkCat, "Smog Cat"};
CardMerge GrandMagicCat{NeonCat, MagicCat, "Grand Magic Cat"};
CardMerge StunnedCat{NeonCat, LightCat, "Stunned Cat"};
CardMerge DarkStunnedCat{NeonCat, DarkCat, "Dark Stunned Cat"};
CardMerge WhiteHatCat{MagicCat, LightCat, "White Hat Cat"};
CardMerge BlackHatCat{MagicCat, DarkCat, "White Hat Cat"};
CardMerge Kitten{LightCat, DarkCat, "Kitten"};
void CardChecker(std::string MyCard) {
    if (MyCard == Cat.Tag) {}
    if (MyCard == WaterCat.Tag) {}
    if (MyCard == )
}