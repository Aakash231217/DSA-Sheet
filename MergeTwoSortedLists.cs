/*
Problem: https://leetcode.com/problems/merge-two-sorted-lists/

Explanation: first of all we need to iterate the lists while we don't reach the end of one of them. For each iteration, we simply pick the lowest value of each current node of each list and this node then receives its next one. After one of the lists reach its end, we check if some of them still have any elements and set the list as next in positive case. The tail node is used for creating the merged list and not losing the reference of the initial node (head).
*/

public ListNode MergeTwoLists(ListNode list1, ListNode list2) {
    var dummyNode = new ListNode();

    var tail = dummyNode;

    while (list1 != null && list2 != null)
    {
        if (list1.val <= list2.val)
        {
            tail.next = list1;
            list1 = list1.next;
        }
        else
        {
            tail.next = list2;
            list2 = list2.next;
        }
        tail = tail.next;
    }

    if (list1 != null) tail.next = list1;
    else if (list2 != null) tail.next = list2;

    return dummyNode.next;
}
