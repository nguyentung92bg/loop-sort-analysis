/* IL2CPP: PlayerProfile$$Equals
bool PlayerProfile__Equals (PlayerProfile_o __this, PlayerProfile_o other, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: PlayerProfile$$Equals
   bool PlayerProfile__Equals (PlayerProfile_o __this, PlayerProfile_o other, const MethodInfo*
   method); */

bool PlayerProfile__Equals_2553164(long param_1,long param_2)

{
  bool bVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  
                    /* try { // try from 02653168 to 0275316f has its CatchHandler @ 026533a8 */
                    /* try { // try from 02653170 to 0275319b has its CatchHandler @ 02652c68 */
  uVar2 = System_String__op_Equality_2f7b7fc
                    (*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_2 + 8),0);
  if ((uVar2 & 1) == 0) {
    return false;
  }
  lVar3 = *(long *)(param_1 + 0x10);
  lVar7 = *(long *)(param_2 + 0x10);
                    /* try { // try from 0265319c to 027531b3 has its CatchHandler @ 02653384 */
  if (lVar3 == lVar7) {
    return true;
  }
  if (lVar3 == 0) {
    return false;
  }
  if (lVar7 != 0) {
    if (*(int *)(lVar3 + 0x10) != *(int *)(lVar7 + 0x10)) {
      return false;
    }
    lVar8 = (long)*(int *)(lVar3 + 0x10) << 1;
    lVar3 = lVar3 + 0x14;
    lVar7 = lVar7 + 0x14;
    if (lVar3 != lVar7) {
      lVar4 = System_IntPtr__op_Explicit_314af4c(0,0,lVar8,0);
      uVar5 = System_IntPtr__op_Explicit_314af58(lVar8,0);
      uVar2 = System_IntPtr__op_Explicit_314af64(uVar5,0);
      if (7 < uVar2) {
        lVar8 = System_IntPtr__op_Subtraction_314af78(uVar5,8,0);
        while( true ) {
          uVar2 = System_IntPtr__op_Explicit_314af64(lVar8,0);
          uVar6 = System_IntPtr__op_Explicit_314af64(lVar4,0);
          if (uVar2 <= uVar6) {
            return *(long *)(lVar3 + lVar8) == *(long *)(lVar7 + lVar8);
          }
          uVar2 = System_UIntPtr__op_Inequality_3159858
                            (*(undefined8 *)(lVar3 + lVar4),*(undefined8 *)(lVar7 + lVar4),0);
          if ((uVar2 & 1) != 0) break;
          lVar4 = System_IntPtr__op_Addition_314af70(lVar4,8,0);
        }
        return false;
      }
      uVar2 = System_IntPtr__op_Explicit_314af64(uVar5,0);
      uVar6 = System_IntPtr__op_Explicit_314af64(lVar4,0);
      if (uVar6 < uVar2) {
        do {
          bVar1 = *(char *)(lVar3 + lVar4) == *(char *)(lVar7 + lVar4);
          if (!bVar1) {
            return bVar1;
          }
          lVar4 = System_IntPtr__op_Addition_314af70(lVar4,1,0);
          uVar2 = System_IntPtr__op_Explicit_314af64(uVar5,0);
          uVar6 = System_IntPtr__op_Explicit_314af64(lVar4,0);
        } while (uVar6 < uVar2);
        return bVar1;
      }
    }
    return true;
  }
  return false;
}

