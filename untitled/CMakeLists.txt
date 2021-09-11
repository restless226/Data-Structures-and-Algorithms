cmake_minimum_required(VERSION 3.16)
project(untitled)

set(CMAKE_CXX_STANDARD 14)

add_executable(untitled algorithmic_toolbox/test.cpp
        calculator/calculator_II.cpp arrays_practice/array_sorting.cpp arrays_practice/array1.cpp
        arrays_practice/arrays3.cpp arrays_practice/array4.cpp arrays_practice/array3_1.cpp
        arrays_practice/array3_1.cpp arrays_practice/array4_1.cpp others/matrix.cpp
        assignment_1/assignment_1_using_struct.cpp assignment_1/studDB.h assignment_1/studDB_impl.cpp
        assignment_1/main_interface.cpp algorithmic_toolbox/sum1.cpp arrays_practice/ass1.cpp
        arrays_practice/ass1_again.cpp
        algorithmic_toolbox DM/linear_searrch.cpp
        DM/occurances.cpp assignment_3_queue/circular_queue_2.cpp assignment_3_queue/queue_final.cpp
        DM/DM_lists.cpp Basics/vectors_tut.cpp Basics/Templates/templates.cpp
        stack_assignment stack_assignment/linkedlistwithstack.h Basics/algorithms/SORTING/selectionSort.cpp
        Basics/algorithms/SORTING/BubbleSort.cpp Basics/algorithms/SORTING/InsertionSort.cpp
        Basics/algorithms/SORTING/MergeSort.cpp Basics/algorithms/SORTING/QuickSort.cpp others/main1.cpp
        queue_again/queue_final.h queue_again/queue_impl.cpp queue_again/queue_main.cpp Basics/LinkedList/Single_LL/List.h
        Basics/LinkedList/Single_LL/List_impl.cpp Basics/LinkedList/Single_LL/list_main.cpp stack_2/stack_again.cpp
        Basics/LinkedList/Single_LL/LinkedList_again/LL._again.cpp Basics/LinkedList/Single_LL/LinkedList_again/LL_Final_code.cpp
        Basics/HackerRank/display_LL.cpp
        Basics/HackerRank/insert_at_tail.cpp Basics/HackerRank/insert_at_head.cpp
        Basics/HackerRank/insert_at_middle.cpp Basics/HackerRank/delete_a_node.cpp
        Basics/HackerRank/get_node_value.cpp Basics/HackerRank/reverse_LL.cpp
        Basics/GFG/LL/count_nodes.cpp Basics/GFG/LL/delete_without_head_pointer.cpp
        Basics/GFG/LL/occurance_in_LL.cpp Basics/LinkedList/Double_LL/double_LL.cpp
        Basics/GFG/LL/LL_length_even_or_odd.cpp Basics/GFG/LL/Count_Pairs_whose_sum_is_equal_to_X.cpp
        Basics/GFG/LL/Add_two_numbers_represented_by_Linked_List.cpp Basics/GFG/LL/Identical_LL.cpp
        Basics/GFG/LL/delete_alternate_nodes.cpp Basics/GFG/LL/Add_1_to_LL.cpp Basics/LinkedList/Circular_LL/Circular_LL.cpp
        Basics/GFG/LL/decimal_eq_of_binary_LL.cpp  Basics/GFG/LL/subtraction_in_LL.cpp Basics/queue/queue_code.cpp
        Basics/queue/circular_queue.cpp Basics/GFG/Queue/queue_using_array.cpp Basics/GFG/LL/find_middle_of_LL.cpp
        Basics/GFG/LL/insert_in_middle.cpp Basics/GFG/LL/node_at_given_index.cpp Basics/GFG/Queue/queue_push_and_pop.cpp
        Basics/GFG/Queue/STL_queue.cpp Basics/GFG/Queue/queue_reversal.cpp Basics/GFG/Arrays/fighting_darkness.cpp
        Basics/GFG/Arrays/check_array_equality.cpp Basics/GFG/Arrays/rotate_array.cpp
        Basics/GFG/Queue/queue_using_LL.cpp Basics/GFG/LL/sum_of_last_n_nodes.cpp
        Basics/GFG/LL/LL_insertion.cpp Basics/Stack/stack_code.cpp Basics/queue/queue_using_LL.cpp
        Basics/GFG/Queue/queue_using_two_stacks.cpp Basics/GFG/LL/Stack.cpp
        Basics/GFG/LL/linked_list_of_strings_forms_a_palindrome.cpp Basics/GFG/LL/compare_two_LL.cpp
        Basics/GFG/LL/sort_LL.cpp Basics/Stack/stack_using_LL.cpp Basics/Stack/Expression_conversions/infix_to_postfix.cpp
        Basics/Stack/Expression_conversions/infix_to_prefix.cpp Basics/Stack/Expression_conversions/postfix_to_infix.cpp Basics/Stack/Expression_conversions/prefix_to_infix.cpp
        DSA_mock_test.cpp ROUGH_FILES/rough2.cpp DSAL_mock/header.h DSAL_mock/impl.cpp DSAL_mock/main.cpp
        Basics/GFG/Stack/stack_designer.cpp Basics/GFG/Stack/stack_using_array.cpp
        Basics/GFG/Stack/pairwise_consecutive_elements.cpp Basics/GFG/Stack/immediate_smaller_element.cpp
        Basics/GFG/Stack/remove_repeated_digits.cpp Basics/GFG/Stack/delete_middle_element_of_stack.cpp
        Basics/GFG/Stack/stack_using_LL.cpp Basics/GFG/Stack/valid_substring.cpp
        Basics/GFG/Stack/special_stack.cpp Basics/GFG/Stack/print_bracket_no.cpp
        Basics/GFG/Stack/sorting_stack.cpp Basics/GFG/Stack/get_min_at_pop.cpp
        Basics/GFG/Stack/impl_two_stacks_in_array.cpp Basics/GFG/Queue/generate_binary_no.cpp
        Basics/GFG/Stack/reverse_a_string.cpp Basics/GFG/Stack/stack_using_two_queues.cpp
        Basics/BST/BST_impl.cpp Basics/GFG/searching/Count_zeros_in_a_sorted_matrix.cpp
        Basics/Templates/templates2.cpp Basics/Templates/function_templates.cpp
        Basics/Templates/overloading_templates.cpp Basics/Lists.cpp Basics/maps.cpp
        Basics/function_objects.cpp
        assignment_3_queue/queue.h assignment_3_queue/main.cpp assignment_3_queue/impl.cpp
        assignment_1/studDB.h assignment_1/studDB_impl.cpp assignment_1/main_interface.cpp
        assignment_2_stack/mainFile.cpp assignment_2_stack/stack_impl.cpp
        assignment_2_stack/Stack.h
        assignment4_exp_tree/Assignment4.cpp assignment4_exp_tree/ExpressionHeader.h
        assignment4_exp_tree/ExpressionImplementation.cpp assignment4_exp_tree/StackHeader.h
        assignment4_exp_tree/StackImplementation.cpp assignment4_exp_tree/TreeExpressionHeader.h
        assignment4_exp_tree/TreeExpressionImplementation.cpp
        assignment_5_BST/BST.cpp assignment_5_BST/BST.h assignment_5_BST/BST_Main.cpp
        assignment_2_stack/stack_final.cpp assignment4_exp_tree/exp_tree_final.cpp
        assignment_5_BST/BST_final.cpp
        assignment_7/assignment_7.cpp assignment_8/assignment_8.cpp
        assignment_6_TBT/tbt.h assignment_6_TBT/tbt_impl.cpp assignment_6_TBT/tbt_main.cpp
        assignment_9_heap_sort/heap_header.h
        assignment_9_heap_sort/heap_main.cpp
        assignment_9_heap_sort/heap_impl.cpp
        assignment_9_heap_sort/HEAP.cpp
        ROUGH_FILES/rough3.cpp Basics/graphs/MST_kruskal.cpp Basics/graphs/MST_Prim.cpp
        assignment_10/assignment_10.cpp
        assignment_7/mst_header.h assignment_7/mst_impl.cpp assignment_7/mst_main.cpp
        assignment_8/dijk_header.h assignment_8/dijk_impl.cpp assignment_8/dijk_main.cpp
        assignment_10/header.h assignment_10/impl.cpp assignment_10/main.cpp
        Basics/hashing.cpp Basics/sets.cpp
        assignment_6_TBT/TBT_FINAL.cpp ROUGH_FILES/rough4.cpp ROUGH_FILES/rough5.cpp
        algorithmic_toolbox/week3/money_change.cpp
        algorithmic_toolbox/week3/max_loot.cpp
        algorithmic_toolbox/week3/car_fueling.cpp
        Basics/Templates/unordered_maps.cpp
        Basics/graphs/graph.cpp Basics/graphs/graph2.cpp Basics/graphs/MST_Prim2.cpp
        Basics/graphs/Djikstras.cpp Basics/dequeue/dequeue.cpp Basics/dequeue/deque2.cpp
        Basics/dequeue/deque3.cpp Basics/mod_exp.cpp Basics/matrix_exp.cpp Basics/priority_queue.cpp
        ROUGH_FILES/rough1.cpp ROUGH_FILES/main.cpp
        Basics/Recursion/fib.cpp Basics/Recursion/array_sort.cpp
        Basics/Recursion/first_index.cpp Basics/Recursion/last_index.cpp
        Basics/Recursion/all_indices.cpp Basics/Recursion/find_char_arr_length.cpp
        Basics/sliding_window/max_sum_subarray_size_k.cpp
        Basics/Trees_CN/tree_node.h Basics/Trees_CN/tree_use.cpp Basics/Binary_Trees_CN/binary_tree_node.h
        Basics/Binary_Trees_CN/binary_tree_use.cpp
        Basics/Binary_Trees_CN/binary_tree_main.cpp Basics/BST_CN/BST.h
        Basics/BST_CN/BST_use.cpp Basics/LinkedList_CN/LL_node.cpp Basics/LinkedList_CN/LL_node.h
        Basics/LinkedList_CN/LL_main.cpp Basics/TBT/TBT.h Basics/HEAP/heap.h
        Basics/HEAP/heap_use.cpp Basics/HEAP/heap_main.cpp
        Basics/GRAPHS_CN/grpahs_use.cpp Basics/GRAPHS_CN/kruskal.cpp Basics/GRAPHS_CN/Prim.cpp
        Basics/GRAPHS_CN/Dijikstras.cpp Basics/EXP_CONVERSIONS_AGAIN/infix_to_postfix.cpp
        Basics/EXP_CONVERSIONS_AGAIN/infix_to_prefix.cpp Basics/SORTING_ALGORITHMS_AGAIN/merge_sort.cpp
        Basics/SORTING_ALGORITHMS_AGAIN/quick_sort.cpp Basics/EXP_TREE/exp_tree_impl.cpp Basics/EXP_TREE/exp_tree.h
        Basics/EXP_TREE/exp_tree.h Basics/FILE_HANDLING/file_handling.cpp
        Basics/FILE_HANDLING/file_handling_2.cpp Basics/FILE_HANDLING/file_handling_FINAL.cpp
        Basics/DP/fib.cpp Basics/DP/min_steps.cpp Basics/DP/min_count.cpp
        DAA/file_handling.cpp DAA/merge_sort.cpp DAA/n_queens.cpp DAA/fractional_knapsack_using_greedy.cpp
        Basics/BACKTRACKING/n_queens.cpp Basics/BACKTRACKING/rat_in_a_maze.cpp
        Basics/BINARY_SEARCH/aggressive_cows.cpp DAA/knapsack_01_using_DP.cpp
        Basics/DP/knapsack_01_variations/knapsack_01_using_DP.cpp Basics/DP/knapsack_01_variations/subset_sum.cpp Basics/DP/knapsack_01_variations/equal_sum_partition.cpp
        Basics/DP/knapsack_01_variations/count_subsets_sum_with_given_sum.cpp Basics/DP/knapsack_01_variations/min_sum_partition.cpp
        Basics/DP/knapsack_01_variations/count_no_of_subsets_with_given_difference.cpp Basics/DP/knapsack_01_variations/target_sum.cpp
        Basics/DP/unbounded_knapsack/unbounded_knapsack_using_DP.cpp Basics/DP/unbounded_knapsack/rod_cutting_problem.cpp
        Basics/DP/unbounded_knapsack/coin_change_one.cpp Basics/DP/unbounded_knapsack/coin_change_two.cpp
        Basics/DP/DP_LCS/lcs.cpp Basics/DP/DP_LCS/longest_common_substring.cpp
        Basics/DP/DP_LCS/scs.cpp Basics/DP/DP_LCS/min_no_of_insertions_deletions_to_convert_a_to_b.cpp
        Basics/DP/DP_LPS/lps.cpp Basics/DP/DP_LPS/min_deletions_to_make_palindrome.cpp
        Basics/DP/DP_LCS/lrs.cpp Basics/DP/DP_LCS/sequence_pattern_matching.cpp
        Basics/DP/DP_LPS/min_insertions_to_form_palindrome.cpp Basics/DP/DP_MCM/mcm.cpp
        Basics/DP/DP_LCS/edit_distance.cpp Basics/DP/DP_MCM/palindromic_partitioning.cpp
        Basics/DP/DP_MCM/boolean_parenthesization.cpp Basics/DP/DP_MCM/egg_dropping.cpp)


