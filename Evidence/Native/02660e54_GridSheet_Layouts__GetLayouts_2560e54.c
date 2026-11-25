/* IL2CPP: GridSheet.Layouts$$GetLayouts
System_Collections_Generic_Dictionary_ValueCollection_Enumerator_GridSheet_LayoutType__GridSheet_Layout__o GridSheet_Layouts__GetLayouts (GridSheet_Layouts_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: GridSheet.Layouts$$GetLayouts
   System_Collections_Generic_Dictionary_ValueCollection_Enumerator_GridSheet_LayoutType__GridSheet_Layout__o
   GridSheet_Layouts__GetLayouts (GridSheet_Layouts_o* __this, const MethodInfo* method); */

void GridSheet_Layouts__GetLayouts_2560e54(undefined8 *param_1,long param_2)

{
  long lVar1;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if ((bRam0000000004f4c119 & 1) == 0) {
                    /* try { // try from 02660e74 to 02760e97 has its CatchHandler @ 02660d04 */
    FUN_021f03f8(PTR_DAT_049cb990);
    FUN_021f03f8(PTR_DAT_049cb998);
    bRam0000000004f4c119 = 1;
  }
                    /* try { // try from 02660e98 to 02760ea3 has its CatchHandler @ 02660fe0 */
  if ((*(long *)(param_2 + 0x40) != 0) &&
     (lVar1 = System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___get_Values_282b2a4
                        (*(long *)(param_2 + 0x40),*(undefined8 *)PTR_DAT_049cb990), lVar1 != 0)) {
                    /* try { // try from 02660eb0 to 02760ebf has its CatchHandler @ 02660fcc */
                    /* try { // try from 02660ec0 to 02760ecf has its CatchHandler @ 02660d04 */
    System_Collections_Generic_Dictionary_ValueCollection___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___GetEnumerator_29facc8
              (lVar1,&uStack_38,*(undefined8 *)PTR_DAT_049cb998);
                    /* try { // try from 02660ed0 to 02760edb has its CatchHandler @ 02660fd8 */
    param_1[1] = uStack_30;
    *param_1 = uStack_38;
    param_1[2] = uStack_28;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

