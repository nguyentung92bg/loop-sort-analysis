/* IL2CPP: ShuffleBoosterSystem$$TryShuffle
bool ShuffleBoosterSystem__TryShuffle (ShuffleBoosterSystem_o* __this, Carrier_o* carrier, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: ShuffleBoosterSystem$$TryShuffle
   bool ShuffleBoosterSystem__TryShuffle (ShuffleBoosterSystem_o* __this, Carrier_o* carrier, const
   MethodInfo* method); */

uint ShuffleBoosterSystem__TryShuffle_23fea30(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  
  uVar1 = ShuffleBoosterSystem__CanShuffle_23febf4();
  if ((uVar1 & 1) != 0) {
    ShuffleBoosterSystem__Shuffle_23fefdc(param_1,param_2);
  }
  return uVar1 & 1;
}

