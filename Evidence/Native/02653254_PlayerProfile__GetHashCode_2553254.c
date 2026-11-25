/* IL2CPP: PlayerProfile$$GetHashCode
int32_t PlayerProfile__GetHashCode (PlayerProfile_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: PlayerProfile$$GetHashCode
   int32_t PlayerProfile__GetHashCode (PlayerProfile_o __this, const MethodInfo* method); */

uint PlayerProfile__GetHashCode_2553254(long param_1)

{
  int iVar1;
  uint uVar2;
  long *plVar3;
  uint uVar4;
  
  plVar3 = *(long **)(param_1 + 8);
  if (plVar3 == (long *)0x0) {
    uVar4 = 0;
  }
  else {
    iVar1 = (**(code **)(*plVar3 + 0x158))(plVar3,*(undefined8 *)(*plVar3 + 0x160));
    uVar4 = iVar1 * 0x18d;
  }
  plVar3 = *(long **)(param_1 + 0x10);
  uVar2 = 0;
  if (plVar3 != (long *)0x0) {
    uVar2 = (**(code **)(*plVar3 + 0x158))(plVar3,*(undefined8 *)(*plVar3 + 0x160));
  }
                    /* try { // try from 026532a4 to 027532af has its CatchHandler @ 02653398 */
  return uVar2 ^ uVar4;
}

